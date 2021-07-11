#include "ISpaceMarine.hpp"

/*
    AssaultTerminator implement ISpaceMarine
*/
class AssaultTerminator : public ISpaceMarine {

    public :
        AssaultTerminator( void );                          /*canonical */
        ~AssaultTerminator( void  );                        /*canonical */
        AssaultTerminator(AssaultTerminator const &  src);  /*canonical */
        ISpaceMarine *clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const; 

   private :
        AssaultTerminator  & operator = (AssaultTerminator const   &  src); /*canonical */

};