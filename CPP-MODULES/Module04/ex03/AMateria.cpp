#include "AMateria.hpp"

AMateria::AMAteria(std::string const &type){
    this->_xp = 0;
    this->_type = type;
}

AMateria::AMAteria(AMateria const & src){
    if( this != & src)
    {
        this->_type = src.getType();
        this->_xp = src.getXP();
    }
}

AMAteria & AMAteria::operator = (AMAteria const & src)
{
    if (this != &src)
        this->_xp = src.getXP();
    return *this;

}
AMateria::AMAteria( void ){

}

AMateria::~AMateria( void ){

}

std::string const &AMateria::getType() const{
    return this->_type;
}

unsigned int AMateria::getXP() const {
    return this->_xp;
}


void AMAteria::use(ICharacter & target){
    (void )target;
    this->_xp += 10;
}