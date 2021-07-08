#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {

    public :
        AssaultTerminator( void );
        ~AssaultTerminator( void  );
        AssaultTerminator(AssaultTerminator const &  src);
        AssaultTerminator  const  & operator = (AssaultTerminator const   &  src);
        ISpaceMarine *clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const; 
};