#include "qsampledata.h"
#include <QDataStream>


QSampleData::QSampleData()
{
    m_nType = 0;
    m_strName = "";
}

QSampleData::~QSampleData()
{

}

QSampleData& QSampleData::operator =(const QSampleData& other)
{
    m_nType = other.m_nType;
    m_strName = other.m_strName;
    return *this;
}

QDataStream& operator>>(QDataStream& src, QSampleData& data)
{
    /*
     错误:C2679: 二进制“>>”: 没有找到接受“quint32”类型的右操作数的运算
    解决方法：因为没有添加头文件<QDataStream>
    */
    src >> data.m_nType ;
    src >> data.m_strName;
    return src;
}
QDataStream& operator<<(QDataStream& out, QSampleData& data)
{
    out << data.m_nType << data.m_strName;
    return out;
}
