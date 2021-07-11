#ifndef MALA_H
# define MALA_H
#include "Enemy.hpp"

class Mala : public Enemy {
    public:
        Mala( void );                /*canonical */
        Mala(Mala const &src);/* canonical */
        std::string const & getType();
        Mala & operator = (Mala const & src); /* canonical */
        virtual ~Mala( void );   /*canonical */
};


#endif