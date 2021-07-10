#include "AMateria.hpp"


AMateria::AMateria(std::string const &type){
    this->_xp = 0;
    this->_type = type;
}

AMateria::AMateria(AMateria const & src){
    if( this != & src)
    {
        this->_type = src.getType();
        this->_xp = src.getXP();
    }
}

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


void AMateria::use(ICharacter & target){
    (void )target;
    this->_xp += 10;
}