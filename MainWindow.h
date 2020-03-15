#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


#include <QMainWindow>
#include <QtWidgets>

class Editor;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = NULL);
    ~MainWindow();

private slots:
    void saveFile();
    void loadFile();

private:
    void createMenus();

    void addTable(QPointF& position);

    QGraphicsView* m_view;
    QGraphicsScene* m_scene;
    Editor* m_editor;
    QMenu* m_fileMenu;

};

#endif // MAINWINDOW_H
