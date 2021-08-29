#ifndef HUMAN_B_H
# define HUMAN_B_H
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
    private:
        Weapon * _weapon;
        std::string const & _name;

    public:
        HumanB(std::string const & name);
        ~HumanB( void );
        std::string const & getName() const;
        Weapon getWeapon() const;
        void setWeapon(Weapon &weapon);
        void attack( void ) const;
       
};


#endif