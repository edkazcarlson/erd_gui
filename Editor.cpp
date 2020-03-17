#include "Editor.h"
#include <QEvent>
#include <Qt>
#include <QGraphicsSceneMouseEvent>

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
                    //make the add new table button
                }

            }
        }

    }

    return true;
}
