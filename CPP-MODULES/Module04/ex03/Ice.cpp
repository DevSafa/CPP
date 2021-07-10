#include "Ice.hpp"

Ice::Ice( void ) :  AMateria("ice"){
   
}

Ice::Ice(Ice const & src){
  
    this->_type = src.getType();
    this->_xp = src.getXP();

}

Ice::~Ice( void ){

}

Ice & Ice::operator = (Ice const & src) {
   if(this != &src)
   {
        this->_type = src.getType();
        this->_xp = src.getXP();
   }
    return *this;
}
AMateria *Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter & target){
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at NAME *" << std::endl;
}