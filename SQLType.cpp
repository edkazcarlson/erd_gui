#include "SQLType.h"

SQLType::SQLType()
{
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
}
