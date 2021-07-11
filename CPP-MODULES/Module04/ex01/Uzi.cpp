#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"
#include "Uzi.hpp"

Uzi::Uzi( void ) : AWeapon("Uzi", 3 , 20 ){

}

Uzi::~Uzi( void ){
   
}

Uzi::Uzi(Uzi const & src) : AWeapon(src){
    *this = src;
}

Uzi & Uzi::operator = (Uzi const & src)
{
    if(this != &src)
    {
        this->_name = src._name;
        this->_apcost = src._apcost;
        this->_damage = src._damage;
    }
    return *this;
}


void Uzi::attack() const 
{
  std::cout << "* poo pooo pooo *" << std::endl;
}

