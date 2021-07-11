#ifndef TACTICAL_MARINE_H
# define TACTICAL_MARINE_H

#include "ISpaceMarine.hpp"
/*
    TacticalMarine implement ISpaceMarine
*/
class TacticalMarine : public ISpaceMarine {

    public :
        TacticalMarine( void );                 /*canonical*/
        ~TacticalMarine( void );                /* canonical */
        TacticalMarine( TacticalMarine const & src);    /* canonical */
        ISpaceMarine * clone() const ;           
        void battleCry() const;
        void rangedAttack() const ;
        void meleeAttack() const;

    private :
        TacticalMarine  & operator = ( TacticalMarine const & src); /* canonical */

};

#endif