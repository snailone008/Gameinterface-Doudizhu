#include "qblog4qt.h"
#include <QApplication>
#include <QStandardPaths>
#include <QSettings>
#include <QDir>
#include <QThread>
#include "log4qt/ttcclayout.h"
#include "log4qt/consoleappender.h"
#include <QTextCodec>
QBLog4Qt::QBLog4Qt(QObject *parent) :
    QObject(parent)
{
    QDir mkdir(QStandardPaths::writableLocation(QStandardPaths::DataLocation));
    if(!mkdir.exists()) mkdir.mkdir(QStandardPaths::writableLocation(QStandardPaths::DataLocation));

    //:/Users/Dione/AppData/Local/log4Test/log4qt.log
    //QString outpath = QStandardPaths::writableLocation(QStandardPaths::DataLocation) + "/log4qt.log";
    QString outpath = "logs/log4qt.log";// 日志改为在程序同目录下

    QString configPath = QApplication::applicationDirPath() + "/log4qt.conf";
    if(!QFile::exists(configPath)) //不存在配置文件 创建默认配配置文件
    {
        QSettings configSet(configPath, QSettings::IniFormat);
        configSet.setIniCodec("UTF-8");
        configSet.setValue("log4j.rootLogger", QStringList() << "INFO" << "rollingFile");
        configSet.setValue("log4j.additivity.org.apache", "true");
        configSet.setValue("log4j.appender.rollingFile", "Log4Qt::RollingFileAppender");
        configSet.setValue("log4j.appender.rollingFile.ImmediateFlush", "true");
        configSet.setValue("log4j.appender.rollingFile.AppendFile", "true");
        configSet.setValue("log4j.appender.rollingFile.File", outpath); // 改为自己的路径
        configSet.setValue("log4j.appender.rollingFile.MaxFileSize", "4096KB");
        configSet.setValue("log4j.appender.rollingFile.MaxBackupIndex", "50");
        configSet.setValue("log4j.appender.rollingFile.layout", "Log4Qt::PatternLayout");
        configSet.setValue("log4j.appender.rollingFile.layout.ConversionPattern", "[%p] %d --> %m %n%n");
        configSet.sync();
    }
    else  // 存在修改日志保存路径
    {
        QSettings configSet(configPath, QSettings::IniFormat);
        configSet.setIniCodec("UTF-8");
        configSet.setValue("log4j.appender.rollingFile.File", outpath);
        configSet.sync();
    }

    Log4Qt::PropertyConfigurator::configure(configPath);
    //添加到控制台

    Log4Qt::TTCCLayout *layout = new Log4Qt::TTCCLayout();
    layout->setName("My Layout");
    layout->activateOptions();

    // 创建一个 ConsoleAppender（将日志内容输出到控制台上）
    Log4Qt::ConsoleAppender *appender = new Log4Qt::ConsoleAppender();
    appender->setName("My Appender");
    appender->setLayout(layout);
    // appender->setEncoding(QTextCodec::codecForName("UTF-8"));  // 设置编码
    appender->setTarget(Log4Qt::ConsoleAppender::STDOUT_TARGET);  // 输出到 stdout
    appender->setImmediateFlush(true);  // 立即刷新
    appender->setThreshold(Log4Qt::Level::INFO_INT);  // 设置阈值级别为 INFO
    appender->activateOptions();

    // 在 logger 上添加 appender
    logger()->addAppender(appender);

    // 设置级别为 DEBUG
    logger()->setLevel(Log4Qt::Level::DEBUG_INT);

    logger()->info("start used log4qt!");
}

QBLog4Qt::~QBLog4Qt()
{
    logger()->info("stop used log4qt!");
}

QBLog4Qt *QBLog4Qt::instance()
{
    static QBLog4Qt obj;
    return &obj;
}


QBLog4Helper::QBLog4Helper(const char *fileName, int lineNumber, const char *functionName)
    : version(1)
    , line(lineNumber)
    , file(fileName)
    , function(functionName)
{
}

void QBLog4Helper::writelogToLocal(QBLog4Helper::LogType logtype, const QString &log)
{
    QString threadText = QStringLiteral("0x%1").arg(quintptr(QThread::currentThreadId()));
    QString filter = QString("[file(%1)] [func(%2) line(%3) pid(%4)] ").arg(file).arg(function).arg(line).arg(threadText);

    switch (logtype)
    {
    case LGDebugMsg:
        QBLog4Qt::instance()->debug(filter + log);
        break;
    case LGInfoMsg:
        QBLog4Qt::instance()->info(filter + log);
        break;
    case LGWarningMsg:
        QBLog4Qt::instance()->warn(filter + log);
        break;
    case LGErrorMsg:
        QBLog4Qt::instance()->error(filter + log);
        break;
    case LGFatalMsg:
        QBLog4Qt::instance()->fatal(filter + log);
        break;
    default:
        QBLog4Qt::instance()->info(filter + log);
        break;
    }
}

