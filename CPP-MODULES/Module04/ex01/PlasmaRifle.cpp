#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

// difference between puting a constructor of a bstract class inside the derived class
//or in initialization list
PlasmaRifle::PlasmaRifle( void ) : AWeapon("Plasma Rifle", 5 , 21 ){
    //allocating an object of abstract
    //class type 'AWeapon' error 
        //AWeapon("Plasma Rifle", 5 , 21 );
}

PlasmaRifle::~PlasmaRifle( void ){
    std::cout << "destructor called (PlasmaRifle)" << std::endl;
}

// without  :  AWeapon(src)
// base class 'AWeapon' has private default constructor
PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon(src){
    *this = src;
}

PlasmaRifle & PlasmaRifle::operator = (PlasmaRifle const & src)
{
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

