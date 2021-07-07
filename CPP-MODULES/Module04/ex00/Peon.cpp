#include "Peon.hpp"

Peon::Peon(std::string const &  name) :Victim(name){

    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src) :  Victim(src){
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon( void ){
    std::cout << "Bleuark..." << std::endl;
}

Peon & Peon::operator = (Peon & src){
    if(this != & src){
        this->_name = src._name;
    }
    return *this;
}

void Peon::getPolymorphed( void ) const {
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
