#ifndef TABLEATTRIBUTES_H
#define TABLEATTRIBUTES_H
#include <QtGlobal>
#include <QGraphicsPathItem>

enum sqlTypes{

};

class TableAttribute
{
public:
    TableAttribute();

    void draw();

    QString getName();
    bool getIsNotNull();
    bool getIsUnique();
    bool getIsPK();
    bool getIsFK();
    bool getIsCheck();
    bool getIsDef();
    bool getIsIndex();

    QString setName();
    bool setIsNotNull();
    bool setIsUnique();
    bool setIsPK();
    bool setIsFK();
    bool setIsCheck();
    bool setIsDef();
    bool setIsIndex();


private:
    QString name;
    bool isNotNull;
    bool isUnique;
    bool isPK;
    bool isFK;
    bool isCheck;
    bool isDef;
    bool isIndex;
};

#endif // TABLEATTRIBUTES_H
