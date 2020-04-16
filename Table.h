#ifndef TABLE_H
#define TABLE_H
#include <QtGlobal>
#include <QGraphicsPathItem>
#include "TableAttribute.h"

class Table: public QGraphicsPathItem
{
public:
    Table(QGraphicsItem* parent);
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);


private:
    qint32 m_width;
    qint32 m_height;
    QString name;
    QVector<TableAttribute> attributeLabels;
};

#endif // TABLE_H
