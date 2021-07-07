#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
    this->_name = name;
    this->_apcost = apcost;
    this->_damage = damage; 
}

AWeapon::~AWeapon( void ){
    std::cout << "destructor called(AWeapon)" << std::endl;
}

AWeapon::AWeapon( void ){
}

AWeapon & AWeapon::operator = (AWeapon const & src)
{
    if(this != &src)
    {
        this->_name = src._name;
        this->_damage = src._damage;
        this->_apcost = src._apcost;
    }
    return *this;
}  

AWeapon::AWeapon(AWeapon const  & src)
{
    *this = src;
}

std::string const  & AWeapon::getName( void ) const{
    return this->_name;
}

int AWeapon::getAPCost( void ) const {
    return this->_apcost;
}

int AWeapon::getDamage( void ) const {
    return this->_damage;
}



std::ostream & operator << (std::ostream & o , AWeapon & aweapon )
{
    o << "Name: " << aweapon.getName() << std::endl;
    o << "Damage: " << aweapon.getDamage() << std::endl;
    o << "AP cost: " << aweapon.getAPCost() << std::endl;
    return o;
}
