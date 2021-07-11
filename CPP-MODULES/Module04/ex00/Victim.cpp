#include "Victim.hpp"

/*
    At the birth of a victim, display:
        Some random victim called NAME just appeared!
*/

Victim::Victim( void ){
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}
Victim::Victim( std::string const &  name ) : _name(name){
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const & src)
{
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
    *this = src;
}

Victim & Victim::operator = (Victim const & src){
    if(this != &src)
        this->_name = src.getName();
    return *this;
}

/*
    At its death, display:
        Victim NAME just died for no apparent reason!
*/
Victim::~Victim( void ){
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

/*
    The victim can also introduce itself, in the very same way as the Sorcerer, and says:
        I'm NAME and I like otters!
*/
std::ostream  & operator << ( std::ostream &o, Victim & victim) {
     o << "I'm " << victim.getName() << " and I like otters!" << std::endl;
    return o;
}

/*
    Our Victim can be "polymorphed" by the Sorcerer
    Add a void getPolymorphed() const method to the Victim , which will say:
        NAME has been turned into a cute little sheep!
*/
void Victim::getPolymorphed( void ) const {
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}


std::string Victim::getName( void ) const{
    return this->_name;
}

