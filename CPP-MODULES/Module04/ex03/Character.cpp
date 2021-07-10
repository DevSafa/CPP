#include "Character.hpp"

Character::Character( std::string name ){
    this->_name = name;
    this->_materias = new AMateria *[4];
    for(int i = 0; i < 4 ; i++)
        this->_materias[i] = NULL;
}

Character::Character(Character const &src){
   *this = src;
}

AMateria *Character::getMateria(int i) const 
{
    return this->_materias[i];
}
Character & Character::operator = (Character const & src){
    if(this != &src)
    {
        for(int i = 0; i < 4 ; i++)
        {
            delete this->_materias[i];
            this->_materias[i] = src.getMateria(i)->clone();
        }
    }
    return *this;
}
Character::~Character( void ){
    for(int i = 0 ; i <4 ; i++)
        delete this->_materias[i];
    delete[] this->_materias;
}

std::string const &  Character::getName() const {
    return this->_name;
 
}

void Character::equip(AMateria*m){

}

void Character::unequip(int idx){

}

void Character::use(int idx, ICharacter & target){

}