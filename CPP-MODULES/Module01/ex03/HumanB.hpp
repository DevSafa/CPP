#ifndef HUMAN_B_H
# define HUMAN_B_H
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
    private:
        Weapon _weapon;
        std::string _name;

    public:
        HumanB( std::string name );
        ~HumanB( void );
        std::string getName() const;
        Weapon getWeapon() const;
        void setName( std::string name );
        void setWeapon( Weapon* weapon );
        void attack( void ) const;
};



#endif