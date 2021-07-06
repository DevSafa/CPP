#include "Peon.hpp"

Peon::Peon(std::string name) :Victim(name){

     std::cout << BOLDGREEN << "Parametric constructor called (Peon)"  <<  "\033[0m" << std::endl;
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src) :  Victim(src){
    // std::cout << BOLDGREEN << "Copy Constructor called (Peon)" <<  "\033[0m" << std::endl;
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon( void ){
     std::cout << BOLDRED << "Destructor called (Peon)" << "\033[0m" <<std::endl; 
    std::cout << "Bleuark..." << std::endl;
}

Peon & Peon::operator = (Peon & src){
    std::cout << BOLDYELLOW <<  "Overload of assignement operator (Peon)" << "\033[0m" << std::endl;
    return this->operator = (src);
}

void Peon::getPolymorphed( void ) const {
    //std::cout << BOLDYELLOW << "getPolymorphed() (Peon)" <<  "\033[0m" << std::endl;
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
