#include "Sorcerer.hpp"

/*
    has a con- structor taking the sorcerers name and title as parameters (in this order)
    At the birth of a sorcerer, you will display: NAME, TITLE, is born!
*/

Sorcerer::Sorcerer(std::string const &  name, std::string  const & title){
    this->_name = name;
    this->_title = title;
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer( void ){
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src){
    *this = src;
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer & Sorcerer::operator = (Sorcerer const & src){
    if (this != &src)
    {
        this->_name = src.getName();
        this->_title = src.getTitle();
    }
    return *this;
}

/*
    At his death, you will display: NAME, TITLE, is dead. Consequences will never be the same!
*/
Sorcerer::~Sorcerer( void )
{
    std::cout << this->_name << ", " << this->_title << ", is dead.";
    std::cout << " Consequences will never be the same!" << std::endl;
}

/*
    A sorcerer has to be able to introduce himself thusly:
        I am NAME, TITLE, and I like ponies!
    He can introduce himself on any output stream, thanks to an overload of the << to ostream operator
*/

std::ostream & operator << (std::ostream & o , Sorcerer &sorcerer) {
    o << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", " << "and I like ponies!" << std::endl;
    return o;
}

std::string Sorcerer::getName( void ) const{
    return this->_name;
}

std::string Sorcerer::getTitle( void ) const {
    return this->_title;
}

/*
    Also add the void polymorph(Victim const &) const member function to your Sorcerer , 
    so you can polymorph people.
*/

void Sorcerer::polymorph(Victim const & victim) const
{
    victim.getPolymorphed();
}
