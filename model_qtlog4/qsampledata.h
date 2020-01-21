#ifndef QSAMPLEDATA_H
#define QSAMPLEDATA_H

#include <QObject>

class QSampleData : public QObject
{
public:
    QSampleData();
    virtual ~QSampleData();
    QSampleData& operator=(const QSampleData &other);

    friend QDataStream& operator>>(QDataStream&, QSampleData&);
    friend QDataStream& operator<<(QDataStream&, QSampleData&);

    //定义的数据成员
    int m_nType;
    QString m_strName;
};
#endif
