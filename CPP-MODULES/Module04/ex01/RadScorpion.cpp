#include "RadScorpion.hpp"

RadScorpion::RadScorpion( void ) : Enemy(80, "RadScorpion"){
    std::cout << "* click click click *" << std::endl;
}


RadScorpion::RadScorpion(RadScorpion const & src) : Enemy(src){
    *this= src;
}
std::string const & RadScorpion::getType(){
    return this->_type;
}
RadScorpion & RadScorpion::operator = (RadScorpion const & src){
    if (this != &src)
    {
        this->_hp = src._hp;
        this->_type = src._type;
    }
    return *this;
}

RadScorpion::~RadScorpion( void ){

    std::cout << "* SPROTCH *" << std::endl;
}