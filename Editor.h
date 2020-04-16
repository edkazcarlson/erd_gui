#ifndef EDITOR_H
#define EDITOR_H

#include <QObject>
#include <QGraphicsScene>
#include "Canvas.h"

class Table;

class Editor : public QObject
{
    Q_OBJECT
public:
    explicit Editor(QObject *parent = nullptr);
    void addToScene(QGraphicsScene* scene);
    bool eventFilter(QObject* object, QEvent* event);

    void save(QDataStream& stream);
    void load(QDataStream& stream);

private:
    QGraphicsItem* itemAt(const QPoint& point);

    void showCanvasMenu(const QPoint& point);

private:
    QGraphicsScene* m_scene;
    Table* m_connection;
signals:

};

#endif // EDITOR_H
