#include "Monster.hpp"

Monster::Monster(std::string const &  name) :Victim(name){

    std::cout << "HO HO." << std::endl;
}

Monster::Monster(Monster const & src) :  Victim(src){
    std::cout << "HO HO." << std::endl;
}


Monster::~Monster( void ){
    std::cout << "HAHOOIIIA..." << std::endl;
}

Monster & Monster::operator = (Monster & src){
    if(this != & src){
        this->_name = src._name;
    }
    return *this;
}

void Monster::getPolymorphed( void ) const {
    std::cout << this->_name << " has been turned into a cute cat!" << std::endl;
}
