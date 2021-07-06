#include "Victim.hpp"

Victim::Victim( void ){
     std::cout << BOLDGREEN << "Default constructor called (Victim)" << "\033[0m"  << std::endl;
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}
Victim::Victim( std::string name ) : _name(name){
     std::cout << BOLDGREEN << "Parametric constructor called (Victim)"  <<  "\033[0m" << std::endl;
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const & src)
{
     std::cout << BOLDGREEN << "Copy Constructor called (Victim)" <<  "\033[0m" << std::endl;
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
    *this = src;
}

Victim & Victim::operator = (Victim const & src){
    std::cout << BOLDYELLOW <<  "Overload of assignement operator (Victim)" << "\033[0m" << std::endl;
    if(this != &src)
        this->_name = src.getName();
    return *this;
}

std::string Victim::getName( void ) const{
    return this->_name;
}

std::ostream  & operator << ( std::ostream &o, Victim & victim) {
     o << "I' am " << victim.getName() << " and I like otters!" << std::endl;
    return o;
}

Victim::~Victim( void ){
     std::cout << BOLDRED << "Destructor called (Victim)" << "\033[0m" <<std::endl; 
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;

}

void Victim::getPolymorphed( void ) const {
   // std::cout << BOLDYELLOW << "getPolymorphed() (Victim)" <<  "\033[0m" << std::endl;
    std::cout << this->_name << " has been turned into a cute little sheep" << std::endl;
}