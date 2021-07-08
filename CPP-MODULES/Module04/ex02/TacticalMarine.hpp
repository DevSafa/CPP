#ifndef TACTICAL_MARINE_H
# define TACTICAL_MARINE_H

#include "ISpaceMarine.hpp"
class TacticalMarine : public ISpaceMarine {

    public :
        TacticalMarine( void );
        ~TacticalMarine( void );
        TacticalMarine( TacticalMarine const & src);
        TacticalMarine const & operator = ( TacticalMarine const & src);
        ISpaceMarine * clone() const ;
        void battleCry() const;
        void rangedAttack() const ;
        void meleeAttack() const;

};

#endif