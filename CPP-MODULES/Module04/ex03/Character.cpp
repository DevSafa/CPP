#include "Character.hpp"

/*
    The Character possesses an inventory of 4 Materia at most, empty at start.
    Your Character must have a constructor taking its name as parameter
*/
Character::Character( std::string name ){
    this->_name = name;
    this->_materias = new AMateria *[4];
    for(int i = 0; i < 4 ; i++)
        this->_materias[i] = NULL;
}

/*
    Copy or assignation of a Character must be deep, of course.
    The old Materia of a Character must be deleted.
*/
Character::Character(Character const &src){
   *this = src;
}

AMateria *Character::getMateria(int i) const 
{
    if(i >= 0 && i < 4)
        return this->_materias[i];
    return NULL;
}

/*
    Copy or assignation of a Character must be deep, of course.
    The old Materia of a Character must be deleted.
*/
Character & Character::operator = (Character const & src){
    if(this != &src)
    {
        this->_name = src.getName();
        for(int i = 0; i < 4 ; i++)
        {
            if(this->_materias[i])
                 delete this->_materias[i];
            if(src._materias[i])
                //this->equip(src._materias[i]->clone());
                this->_materias[i]= src._materias[i]->clone();
           // this->_materias[i] = src.getMateria(i)->clone();
        }
    }
    return *this;
}

/*
    upon destruction of a Character
    The old Materia of a Character must be deleted.
*/
Character::~Character( void ){
    for(int i = 0 ; i <4 ; i++)
        delete this->_materias[i];
    delete[] this->_materias;
}

std::string const &  Character::getName() const {
    return this->_name;
 
}

/*
    In case we try to equip a Materia in a full inventory, or use/uneqip a nonexistent
    Materia, don’t do a thing.
*/
void Character::equip(AMateria*m){
    if(m != NULL)
    {
        for(int i = 0 ; i < 4 ; i++)
        {
        // verify to add
        //     if(this->_materias[i] == m)
        //         return ;
            if(this->_materias[i] == NULL)
            {
                this->_materias[i] = m;
                    break;
            }
        }
    }
}

/*
    The unequip method must NOT delete Materia!
*/
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

/*
    The use(int, ICharacter&) method will have to use the Materia at the idx slot,
    and pass target as parameter to the AMateria::use method
*/
void Character::use(int idx, ICharacter & target){
    if(idx >= 0 && idx < 4)
    {
        if(this->_materias[idx] != NULL)
            this->_materias[idx]->use(target);
    }
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