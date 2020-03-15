#ifndef EDITOR_H
#define EDITOR_H

#include <QObject>
#include <QGraphicsScene>

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
    QGraphicsItem* itemAt(const QPointF& point);

    void showBlockMenu(const QPoint& point, Table* block);

private:
    QGraphicsScene* m_scene;
    Table* m_connection;
signals:

};

#endif // EDITOR_H
