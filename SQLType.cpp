#include "SQLType.h"
#include <QGraphicsPathItem>

const std::unordered_map<std::string, int> SQLType::PLSQLTypes
{{"char", 1}, {"nchar", 1}, {"nvarchar2", 1}, {"varchar2", 1},{"long", 0}, {"raw", 0}, {"long raw", 0}, {"number", 2},
    {"numeric", 2}, {"flat", 0}, {"dec", 2}, {"decimal", 2}, {"integer", 0}, {"int", 0}, {"smallint", 0}, {"real", 0},
    {"double precision", 0}, {"date", 0}, {"timestamp", 0}, {"interval year", 0}, {"interval day", 0}, {"bfile", 0},
    {"blob", 0}, {"clob", 0}, {"nclob", 0}, {"rowid", 0}, {"urowid", 1}};


SQLType::SQLType()
{

}


QString SQLType::toString(){

}



sizedSQLType::sizedSQLType()
{

}

QString sizedSQLType::toString()
{

}

short sizedSQLType::getSizeAttributes() const
{
    return sizeAttributes;
}


void sizedSQLType::setSizeAttributes(short value)
{
    sizeAttributes = value;
}
