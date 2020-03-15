#include "Editor.h"

Editor::Editor(QObject *parent) : QObject(parent){

}

void Editor::addToScene(QGraphicsScene *scene){
    Q_ASSERT(scene);
    scene->installEventFilter(this);
    m_scene = scene;
}

bool Editor::eventFilter(QObject* object, QEvent* event){
    return true;
}
