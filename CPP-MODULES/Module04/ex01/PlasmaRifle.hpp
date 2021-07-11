#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H
#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

    public :
        PlasmaRifle( void );                                /* canonical */
        virtual ~PlasmaRifle( void );                               /* canonical */
        PlasmaRifle( PlasmaRifle const & src);              /*canonical */
        PlasmaRifle & operator = (PlasmaRifle const & src); /*canonical */
        virtual void attack( void ) const ;      
};

# endif