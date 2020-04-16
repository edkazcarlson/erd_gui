#include "Table.h"
#include <QDebug>
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include "QDebug"
#include "QPainterPath"

Table::Table(QGraphicsItem* parent):QGraphicsPathItem(parent){
    setCacheMode(DeviceCoordinateCache);

    setFlag(QGraphicsItem::ItemIsMovable);
    setFlag(QGraphicsItem::ItemIsSelectable);

    QPainterPath path;
    path.addRect(-50, -15, 100, 30);
    setPath(path);
    qInfo() << "table made";
    qInfo() << "length: " << path.length();
    this->update();
}

void Table::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
    qInfo() << "paint called";
//    Q_UNUSED(widget);
    painter->setPen(QPen(QColor(0, 0, 0)));
    painter->setBrush(QColor(0, 0, 0));
    painter->drawPath(path());

}
