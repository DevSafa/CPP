#include "Cure.hpp"


Cure::Cure( void ) :AMateria("cure"){
   // AMateria("cure");
}

Cure::Cure(Cure const & src) :AMateria(src){
    // this->_type = src.getType();
    // this->_xp = src.getXP();
}

Cure::~Cure( void ){

}

Cure & Cure::operator = ( Cure const & src){
    // if (this != &src)
    //     this->_xp = src.getXP();
    AMateria::operator=(src);
    return *this;

}

AMateria *Cure::clone() const{
    return new Cure(*this);
}

void Cure::use(ICharacter & target) {
    AMateria::use(target);
    std::cout << "* heals NAME’s wounds *" << std::endl;
}