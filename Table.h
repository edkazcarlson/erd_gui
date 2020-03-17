#ifndef TABLE_H
#define TABLE_H
#include <QtGlobal>
#include <QGraphicsPathItem>
#include "TableAttribute.h"

class Table//: public QGraphicsPathItem
{
public:
    Table();


private:
    qint32 m_width;
    qint32 m_height;
    QString name;
    QVector<TableAttributeController> attributeLabels;
};

#endif // TABLE_H
