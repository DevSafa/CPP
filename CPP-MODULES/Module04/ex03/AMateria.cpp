#include "AMateria.hpp"
/*
    A Materia has an XP total starting at 0,
*/
AMateria::AMateria(std::string const &type){
    this->_xp = 0;
    this->_type = type;
}


AMateria::AMateria(AMateria const & src){
    //*this = src;
    if( this != & src)
    {
        this->_type = src.getType();
        this->_xp = src.getXP();
    }
}
/*
    While assigning a Materia to another, copying the type doesn’t make
    sense...
*/
AMateria & AMateria::operator = (AMateria const & src)
{
    if (this != &src)
        this->_xp = src.getXP();
    return *this;

}
AMateria::AMateria( void ){

}

AMateria::~AMateria( void ){

}

std::string const &AMateria::getType() const{
    return this->_type;
}

unsigned int AMateria::getXP() const {
    return this->_xp;
}

/*
    A Materia has an XP total starting at 0, and increasing by 10 upon every call to use() 
*/
void AMateria::use(ICharacter & target){
    (void )target;
    this->_xp += 10;
}