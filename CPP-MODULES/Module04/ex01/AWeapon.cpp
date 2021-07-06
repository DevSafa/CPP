#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name) {
    this->_apcost = apcost ;
    this->_damage  = damage ; 
}

AWeapon::~AWeapon(){

}

AWeapon & AWeapon::operator = (AWeapon const & src)
{
    if(this != &src)
    {
        this->_name = src._name;
        this->_damage = src.getDamage();
        this->_apcost = src.getAPCost();
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
    o << "Name: " << aweapon.getName();
    o << "Damage: " << aweapon.getDamage();
    o << "AP cost: " << aweapon.getAPCost();
    return o;
}

void         AWeapon::setDamage(int damage){
    this->_damage -= damage;
}