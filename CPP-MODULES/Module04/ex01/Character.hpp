#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {

    private :
        std::string _name;
        int _ap;
        AWeapon *_weapon;
        
    public :
        Character(std::string const & name);        
        ~Character( void );         /* canonical */
        void recoverAP();
        void equip(AWeapon *);
        void attack(Enemy*);
        AWeapon * getWeapon();
        int getAP();
        std::string const & getName() const;    
        Character(Character const &src);    /* canonical */
        Character & operator = ( Character const & src); /* canonical */
    private:
        Character ( void ); /* canonical */
};

std::ostream &operator << (std::ostream  & o , Character & character);
#endif