#ifndef QBLOG4QT_H
#define QBLOG4QT_H

#include <QObject>
#include "log4qt/logger.h"
//#include "log4qt_global.h"
#include "log4qt/propertyconfigurator.h"

#define Log4Debug QBLog4Helper(__FILE__, __LINE__, Q_FUNC_INFO).debug
#define Log4Info  QBLog4Helper(__FILE__, __LINE__, Q_FUNC_INFO).info
#define Log4Warn  QBLog4Helper(__FILE__, __LINE__, Q_FUNC_INFO).warn
#define Log4Error QBLog4Helper(__FILE__, __LINE__, Q_FUNC_INFO).error
#define Log4Fatal QBLog4Helper(__FILE__, __LINE__, Q_FUNC_INFO).fatal
#define Log4qt    QBLog4Helper(__FILE__, __LINE__, Q_FUNC_INFO)


class QBLog4Qt : public QObject
{
    Q_OBJECT
    LOG4QT_DECLARE_QCLASS_LOGGER

public:
    explicit QBLog4Qt(QObject *parent = 0);
    ~QBLog4Qt();

    static QBLog4Qt *instance();
    virtual void debug(const QString& log)
    {
        logger()->debug(log);
    }
    virtual void info (const QString& log)
    {
        logger()->info(log);
    }
    virtual void warn (const QString& log)
    {
        logger()->warn(log);
    }
    virtual void error(const QString& log)
    {
        logger()->error(log);
    }
    virtual void fatal(const QString& log)
    {
        logger()->fatal(log);
    }
};


class QBLog4Helper
{
    Q_DISABLE_COPY(QBLog4Helper)

public:
    Q_DECL_CONSTEXPR QBLog4Helper() : version(1), line(0), file(0), function(0) {}
    QBLog4Helper(const char *fileName, int lineNumber, const char *functionName);
    enum LogType {LGDebugMsg, LGInfoMsg, LGWarningMsg, LGErrorMsg, LGFatalMsg};

    QString TemplateParameter ()
    {
        return "";
    }
    template <typename T, typename ... Args>
    QString TemplateParameter(T head, Args ... args)
    {
        return QString("%1 ").arg(head) + TemplateParameter(args...);
    }

    template <typename T, typename ... Args>
    void debug(T head, Args ... args)
    {
        QString logmsg = QString("%1 ").arg(head) + TemplateParameter(args...);
        writelogToLocal(LGDebugMsg, logmsg);
    }

    template <typename T, typename ... Args>
    void info(T head, Args ... args)
    {
        QString logmsg = QString("%1 ").arg(head) + TemplateParameter(args...);
        writelogToLocal(LGInfoMsg, logmsg);
    }

    template <typename T, typename ... Args>
    void warn(T head, Args ... args)
    {
        QString logmsg = QString("%1 ").arg(head) + TemplateParameter(args...);
        writelogToLocal(LGWarningMsg, logmsg);
    }

    template <typename T, typename ... Args>
    void error(T head, Args ... args)
    {
        QString logmsg = QString("%1 ").arg(head) + TemplateParameter(args...);
        writelogToLocal(LGErrorMsg, logmsg);
    }

    template <typename T, typename ... Args>
    void fatal(T head, Args ... args)
    {
        QString logmsg = QString("%1 ").arg(head) + TemplateParameter(args...);
        writelogToLocal(LGFatalMsg, logmsg);
    }

    virtual void writelogToLocal(LogType logtype, const QString& logmsg);
    virtual void copy(const QBLog4Helper &logContext) {}

    template <typename T>
    inline QBLog4Helper &operator<<(T logmsg)
    {
        writelogToLocal(LGInfoMsg, QString("%1").arg(logmsg));
        return *this;
    }

    int version;
    int line;
    const char *file;
    const char *function;
};

#endif // QBLOG4QT_H

