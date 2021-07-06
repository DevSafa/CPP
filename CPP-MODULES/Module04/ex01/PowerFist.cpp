#include "PowerFist.hpp"

// PowerFist::PowerFist(std::string const & name, int apcost, int damage) : AWeapon("Power Fist" , 8 , 50 ){

// }

PowerFist::PowerFist(void ) : AWeapon("Power Fist" , 8 , 50 ){

}
PowerFist::~PowerFist( void ){

}

PowerFist::PowerFist(PowerFist const & src) :AWeapon(src){
    *this = src;
}

PowerFist & PowerFist::operator = (PowerFist const & src){
    if(this != &src)
    {
        this->_name = src._name;
        this->_apcost = src._apcost;
        this->_damage = src._damage;
    }
    return *this;
}

void PowerFist::attack() const 
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}

