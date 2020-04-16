#include "Editor.h"
#include <QEvent>
#include <Qt>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QMenu>
#include <QGraphicsItem>
#include "Table.h"
#include "Canvas.h"
#include "CustomTypes.h"
#include <iostream>
#include <QDebug>
Editor::Editor(QObject *parent) : QObject(parent){

}

void Editor::addToScene(QGraphicsScene *scene){
    Q_ASSERT(scene);
    scene->installEventFilter(this);
    m_scene = scene;
}

bool Editor::eventFilter(QObject* object, QEvent* event){
    switch (event->type()){
        case QEvent::GraphicsSceneMousePress:{
            QGraphicsSceneMouseEvent* mouseEvent = static_cast<QGraphicsSceneMouseEvent*> (event);
            switch (mouseEvent->button()){
                case Qt::LeftButton:{

                }
                case Qt::RightButton:{
                    qInfo() << "Right button clicked";
                    QGraphicsItem* item = itemAt(mouseEvent->screenPos());
                    qInfo() << mouseEvent->scenePos();
                    if (!item){ //hit the canvas
                        showCanvasMenu(mouseEvent->screenPos());
                    }

                    break;
                }

            }
        }

    }

    return true;
}


void Editor::showCanvasMenu(const QPoint& point)
{
    QMenu menu;
    QAction* newTable = menu.addAction("New Table");

    QAction* selection = menu.exec(point);
    if (selection == newTable){
        qInfo() << "selected new table";
        Table* newTable = new Table(NULL);
        m_scene->addItem(newTable);
        newTable->setPos(point);
    }
}

QGraphicsItem* Editor::itemAt(const QPoint& point)
{
    qInfo() << "reached item at";
    Q_ASSERT(m_scene);

    QList<QGraphicsItem*> items = m_scene->items(QRectF(point - QPointF(1, 1), QSize(10, 10)));
    qInfo() << items.length();
    Q_FOREACH (QGraphicsItem* item, items){
        qInfo() << item->type();
        // Filter out non-user scene items
        if (item->type() > QGraphicsItem::UserType)
            return item;
    }

    // No user scene items found at point
    return NULL;
}

