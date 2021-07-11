#ifndef POWERFIRST_H
# define POWERFIRST_H

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PowerFist : public AWeapon {

    public :
        PowerFist( void );              /* canonical */
        virtual ~PowerFist( void );             /*canonical */
        PowerFist( PowerFist const & src);  /* canonical */
        PowerFist & operator = (PowerFist const & src); /*canonical */
        virtual void attack( void ) const ;
};

# endif