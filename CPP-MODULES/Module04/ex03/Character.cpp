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
    if(m != NULL)
    {
        for(int i = 0 ; i < 4 ; i++)
        {
            if(this->_materias[i] == NULL)
            {
                this->_materias[i] = m;
                break;
            }
        }
    }
}

void Character::unequip(int idx){
    if(idx >= 0 && idx < 4)
    {
        if(this->_materias[idx] != NULL)
            this->_materias[idx] = NULL;
        for(int i = idx ; i < 3 ; i++ )
        {
            if(this->_materias[i+1] == NULL)
                break;
            this->_materias[i] = this->_materias[i+1];
            this->_materias[i+1] = NULL;
        }
    }
}

void Character::use(int idx, ICharacter & target){
    this->_materias[idx]->use(target);
}

std::ostream & operator << (std::ostream & o , Character const & character)
{
    o << "name : " << character.getName() << std::endl;
    o << "Materias : " << std::endl;
    for(int i = 0 ; i < 4 ; i++)
    {
        if(character.getMateria(i) != NULL)
        {
            o << "type : " <<  character.getMateria(i)->getType() << " - ";
            o << "xp : " << character.getMateria(i)->getXP() << std::endl;
        }else
            o << "Null materia" << std::endl;
       
    }
    return o;
}