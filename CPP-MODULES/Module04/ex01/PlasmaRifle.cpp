#include "PlasmaRifle.hpp"



// PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage) : AWeapon("Plasma Rifle" , 5 , 21 ){

// }

PlasmaRifle::PlasmaRifle( void ) : AWeapon("Plasma Rifle" , 5 , 21 ){

}

PlasmaRifle::~PlasmaRifle( void ){

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) :AWeapon(src){
    *this = src;
}

PlasmaRifle & PlasmaRifle::operator = (PlasmaRifle const & src){
    if(this != &src)
    {
        this->_name = src._name;
        this->_apcost = src._apcost;
        this->_damage = src._damage;
    }
    return *this;
}

void PlasmaRifle::attack() const 
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

