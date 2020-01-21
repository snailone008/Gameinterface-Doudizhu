#ifndef REFLECTIONOBJECT_H
#define REFLECTIONOBJECT_H

#include <QApplication>
//声明一个继承于QObject的类
class ReflectionObject : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int Id READ Id WRITE setId)

    Q_PROPERTY(QString Name READ Name WRITE setName)

    Q_PROPERTY(QString Address READ Address WRITE setAddress)

    Q_PROPERTY(PriorityType Priority READ Priority WRITE setPriority)

    Q_ENUMS(PriorityType)

public:

    enum PriorityType  {High, Low, VeryHigh, VeryLow};
    ReflectionObject();
    Q_INVOKABLE int Id()
    {
        return m_Id;
    }

    Q_INVOKABLE QString Name()
    {
        return m_Name;
    }

    Q_INVOKABLE QString Address()
    {
        return m_Address;
    }

    Q_INVOKABLE PriorityType Priority() const
    {
        return m_Priority;
    }

    Q_INVOKABLE void setId(const int & id)
    {
        m_Id = id;
    }

    Q_INVOKABLE void setName(const QString & name)
    {
        m_Name = name;
    }

    Q_INVOKABLE void setAddress(const QString & address)
    {
        m_Address = address;
    }

    Q_INVOKABLE void setPriority(PriorityType priority)
    {
        m_Priority = priority;
    }

private:
    int      m_Id;

    QString  m_Name;

    QString  m_Address;

    PriorityType m_Priority;

};

#endif // REFLECTIONOBJECT_H
