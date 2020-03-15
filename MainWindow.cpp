#include "MainWindow.h"
#include "Editor.h"
#include "Canvas.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent){
    setWindowTitle(tr("ERD GUI"));

    createMenus();

    m_scene = new QGraphicsScene();
    m_view = new Canvas(m_scene, this,0,0,0);
    setCentralWidget(m_view);

    m_editor = new Editor(this);
    m_editor->addToScene(m_scene);
}

void MainWindow::loadFile(){

}

void MainWindow::saveFile(){

}

void MainWindow::addTable(QPointF& position){

}

void MainWindow::createMenus(){

}

MainWindow::~MainWindow(){

}
