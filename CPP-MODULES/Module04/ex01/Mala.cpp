#include "Mala.hpp"


Mala::Mala( void ) : Enemy(30, "Mala"){
    std::cout << "* miw miw miw *" << std::endl;
}


Mala::Mala(Mala const & src) : Enemy(src){
    *this= src;
    std::cout << "* miw miw miw *" << std::endl;
}

std::string const & Mala::getType(){
    return this->_type;
}
Mala & Mala::operator = (Mala const & src){
    if (this != &src)
    {
        this->_hp = src._hp;
        this->_type = src._type;
    }
    return *this;
}


Mala::~Mala( void ){

    std::cout << "* PRIITHH *" << std::endl;
}
