#include "Canvas.h"
#include <QPainter>
#include <iostream>
using namespace std;

Canvas::Canvas(QGraphicsScene* scene, QWidget* parent, int r, int g, int b):
    QGraphicsView(scene, parent){
    setRenderHint(QPainter::Antialiasing, true);
    red = r;
    green = g;
    blue = b;
}

Canvas::~Canvas()
{
}

void Canvas::drawBackground(QPainter* painter, const QRectF& rect){
    painter->fillRect(rect, QBrush(QColor(red, green, blue)));
}

void Canvas::wheelEvent(QWheelEvent *event){
    this->setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
    double scaleFactor = 1.15;

    if(event->delta() > 0) {
        this-> scale(scaleFactor, scaleFactor);
    } else {
        this->scale(1.0 / scaleFactor, 1.0 / scaleFactor);
    }
}
