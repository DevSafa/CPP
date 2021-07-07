#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H
#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

    public :
        PlasmaRifle( void );
        ~PlasmaRifle( void );
        PlasmaRifle( PlasmaRifle const & src);
        PlasmaRifle & operator = (PlasmaRifle const & src);
        void attack( void ) const ;      
};

# endif