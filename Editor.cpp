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
                    QGraphicsItem* item = itemAt(mouseEvent->scenePos());
                    qInfo() << mouseEvent->scenePos();
                    if (!item)
                        break;

                    const QPoint menuPosition = mouseEvent->screenPos();

                    if (item->type() == canvasEnum)
                    {
                        showCanvasMenu(menuPosition);
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
    if (selection == newTable)
    {
        Table* newTable = new Table();
        m_scene->addItem(newTable);
    }
}

QGraphicsItem* Editor::itemAt(const QPointF& point)
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

