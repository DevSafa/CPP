#ifndef RADSCORPION_H
# define RADSCORPION_H
#include "Enemy.hpp"

class RadScorpion : public Enemy {
    public:
        RadScorpion( void );                /*canonical */
        RadScorpion(RadScorpion const &src);/* canonical */
        std::string const & getType();
        RadScorpion & operator = (RadScorpion const & src); /* canonical */
        virtual ~RadScorpion( void );   /*canonical */
};


#endif