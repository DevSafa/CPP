#ifndef RADSCORPION_H
# define RADSCORPION_H
#include "Enemy.hpp"

class RadScorpion : public Enemy {
    public:
        //RadScorpion(int hp, std::string const &type);
        RadScorpion( void );
        RadScorpion(RadScorpion const &src);
        std::string const & getType();
        RadScorpion & operator = (RadScorpion const & src);
        ~RadScorpion( void );
        void takeDamage(int);
        
};


#endif