#ifndef CHARACTER_H
# define CHARACTER_H
#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"
class Character : public ICharacter {
    private:
        std::string _name;
        AMateria **_materias;
        Character( void );
    public :
        Character(std::string name);
        ~Character( void );
        Character(Character const & src);
        Character & operator = ( Character const & src);
        std::string const & getName() const;
        AMateria * getMateria(int i) const; 
        void equip(AMateria* m);
        void unequip( int idx);
        void use(int idx, ICharacter & target);
};

#endif