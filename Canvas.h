#ifndef CANVAS_H
#define CANVAS_H

#include <QGraphicsView>
#include <QtWidgets>
#include "CustomTypes.h"
#include <QDebug>

class Canvas : public QGraphicsView
{
    Q_OBJECT

public:
    Canvas(QGraphicsScene* scene, QWidget* parent, int r, int g, int b);
    ~Canvas();
    void drawBackground(QPainter* painter, const QRectF& rect);
    void wheelEvent(QWheelEvent *event);
    int type() const { qInfo() << "type called";
        return canvasEnum; }
private:
    int red;
    int green;
    int blue;
};
#endif // MAINWINDOW_H
