#ifndef POWERFIRST_H
# define POWERFIRST_H

#include <iostream>
#include <string>
#include "AWeapon.hpp"
class PowerFist : public AWeapon {

    public :
        PowerFist(std::string const & name, int apcost, int damage);
        ~PowerFist( void );
        PowerFist( PowerFist const & src);
        PowerFist & operator = (PowerFist const & src);
        void attack( void );

    private :
         PowerFist( void );
         
};

# endif