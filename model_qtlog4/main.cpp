#include <QApplication>
#include <qblog4qt.h>
#include<QDebug>
#include "qsampledata.h"
#include <QJsonDocument>
#include <QJsonObject>
#include "reflectionobject.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Log4Info("hello world log4info4!", "abcdefg");
    Log4Warn("Log4Warn", "234");
    Log4Debug("Log4Debug", "234");
    Log4Fatal("Log4Fatal", "234");
    // Log4Error("snailone  --fin not found");
    // return a.exec();

    QSampleData data;
    data.m_nType = 12;
    data.m_strName = "vic.MINg";

    QJsonObject json ;
    json.insert("m_nType", data.m_nType);
    json.insert("Time", data.m_strName );
    json.insert("Qing", true);

    QJsonDocument document;
    document.setObject(json);
    QByteArray byteArray = document.toJson(QJsonDocument::Compact);
    QString str(byteArray);
    Log4Info(str);

    int propertyIndex;

//    ReflectionObject theObject;

//    const QMetaObject* theMetaObject = theObject.metaObject();

//    int propertyCount = theMetaObject->propertyCount();

//    for(propertyIndex = 0; propertyIndex < propertyCount; ++propertyIndex)

//    {

//        QMetaProperty oneProperty = theMetaObject->property(propertyIndex);

//        qDebug() << "name: " << oneProperty.name();

//        qDebug() << "type: " << oneProperty.type() << "\n";

//    }


    return 0;
}
