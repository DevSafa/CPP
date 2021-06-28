#ifndef HUMAN_A_H
# define HUMAN_A_H
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
    private:
        Weapon const & _weapon;
        std::string const & _name;

    public:
        HumanA(std::string const & name, Weapon const   & weapon);
        ~HumanA( void );
        std::string const & getName() const;
        Weapon const & getWeapon() const;
        void attack( void ) const;
       
};



#endif