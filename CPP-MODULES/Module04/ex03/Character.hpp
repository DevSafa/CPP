#ifndef "CHARACTER_H"
# define "CHARACTER_H"
#include <iostream>
#include <string>
class AMateria;
class Character : public ICharacter {
    private:
        AMateria **materias;
    public :
        Character( void );
        ~Character( void );
        Charcater(Character const & src);
        Character & operator = ( Character const & src);
        std::string const & getName() const;
        void equip(AMAteria* m);
        void unequip( int idx);
        void use(int idx, ICharacter & target);
}

#endif