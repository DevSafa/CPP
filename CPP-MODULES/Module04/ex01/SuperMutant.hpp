#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H
#include "Enemy.hpp"

class SuperMutant : public Enemy {

    public :
        SuperMutant( void );            /* canonical */
        virtual ~SuperMutant( void );           /* canonical */
        SuperMutant(SuperMutant const & src);   /* canonical */
        SuperMutant & operator = (SuperMutant const & src); /*canonical */
        virtual void takeDamage(int damage);
};

#endif