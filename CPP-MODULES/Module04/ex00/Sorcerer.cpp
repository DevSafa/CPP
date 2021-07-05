#include "Sorcerer.hpp"

Sorcerer::Sorcerer( void ){
    std::cout << BOLDGREEN << "Default constructor called (Sorcerer)" << "\033[0m"  << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src){
    std::cout << BOLDGREEN << "Copy Constructor called (Sorcerer)" <<  "\033[0m" << std::endl;
    *this = src;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name) , _title(title){
    std::cout << BOLDGREEN << "Parametric constructor called (Sorcerer)"  <<  "\033[0m" << std::endl;
}

std::string Sorcerer::getName( void ) const{
    return this->_name;
}

std::string Sorcerer::getTitle( void ) const {
    return this->_title;
}

Sorcerer & Sorcerer::operator = (Sorcerer const & src){

    std::cout << BOLDYELLOW <<  "Overload of assignement operator (Sorcerer)" << "\033[0m" << std::endl;
    if (this != &src)
    {
        this->_name = src.getName();
        this->_title = src.getTitle();
    }
    return *this;
}

void Sorcerer::birth( void ) const {
    std::cout << this->_name << ", " << this->_title << ", is born" << std::endl;
} 

void Sorcerer::death( void ) const{
    std::cout << this->_name << ", " << this->_title << ", is dead.";
    std::cout << "Consequencs will never be the same!" << std::endl;
}

void Sorcerer::introduce( void ) const{
    std::cout << "I am " << this->_name << ", " << this->_title << "," << "and I like ponies!" << std::endl;
}

Sorcerer::~Sorcerer( void )
{
    std::cout << BOLDRED << "Destructor called (Sorcerer)" << "\033[0m" <<std::endl; 
}
std::ostream & operator << (std::ostream & o , Sorcerer sorcerer) {
    o << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << "," << "and I like ponies!" << std::endl;
    return o;
}

