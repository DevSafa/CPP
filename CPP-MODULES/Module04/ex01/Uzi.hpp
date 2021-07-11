#ifndef UZI_H
# define UZI_H
#include <iostream>
#include <string>
#include "AWeapon.hpp"

class Uzi : public AWeapon {

    public :
        Uzi( void );                                /* canonical */
        virtual ~Uzi( void );                               /* canonical */
        Uzi( Uzi const & src);              /*canonical */
        Uzi & operator = (Uzi const & src); /*canonical */
        virtual void attack( void ) const ;      
};

# endif