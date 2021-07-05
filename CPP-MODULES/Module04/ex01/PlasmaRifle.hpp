#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

#include <iostream>
#include <string>
#include "AWeapon.hpp"
class PlasmaRifle : public AWeapon {

    public :
        PlasmaRifle(std::string const & name, int apcost, int damage);
        ~PlasmaRifle( void );
        PlasmaRifle( PlasmaRifle const & src);
        PlasmaRifle & operator = (PlasmaRifle const & src);
        void attack( void );

    private :
         PlasmaRifle( void );
         
};

# endif