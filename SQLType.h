#ifndef SQLTYPE_H
#define SQLTYPE_H

#include <QtGlobal>
#include <unordered_map>

class SQLType{
public:
    SQLType();
    QString toString();
    const static std::unordered_map <std::string, int> PLSQLTypes;
};



class sizedSQLType : public SQLType{
public:
    sizedSQLType();
    QString toString();
    short getSizeAttributes() const;
    void setSizeAttributes(short value);

private:
    short sizeAttributes;
};


#endif // SQLTYPE_H
/*TODO
 *Make set of Qstrings that contain all the SQL types for PLSQL (add others later)
 * Make a decorator for single sized, make another for double sized
 * when the user changes the type make it so that it checks the new type against lists of
 * single or double sized ones then decide whether to add the decorator
 */

 /* Default no size has all the types and a draw/toString method that can be used in order to put it on the
  * TableAttribute that everyone can call
  *
  * For FKS,make it end-user responsiblity for now
  */
