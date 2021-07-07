#include "Sorcerer.hpp"

Sorcerer::Sorcerer( void ){
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src){
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
    *this = src;
}

Sorcerer::Sorcerer(std::string const &  name, std::string  const & title){
    this->_name = name;
    this->_title = title;
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

std::string Sorcerer::getName( void ) const{
    return this->_name;
}

std::string Sorcerer::getTitle( void ) const {
    return this->_title;
}

Sorcerer::~Sorcerer( void )
{
    std::cout << this->_name << ", " << this->_title << ", is dead.";
    std::cout << " Consequences will never be the same!" << std::endl;
}

Sorcerer & Sorcerer::operator = (Sorcerer const & src){
    if (this != &src)
    {
        this->_name = src.getName();
        this->_title = src.getTitle();
    }
    return *this;
}



std::ostream & operator << (std::ostream & o , Sorcerer &sorcerer) {
    o << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", " << "and I like ponies!" << std::endl;
    return o;
}

void Sorcerer::polymorph(Victim const & victim) const
{
    victim.getPolymorphed();
}
