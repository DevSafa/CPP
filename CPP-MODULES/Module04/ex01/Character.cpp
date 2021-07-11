#include "Character.hpp"

/*
    Has a name, a number of AP (Action points), and a pointer to AWeapon 
    repre- senting the current weapon.

    Posesses 40 AP at creation.
*/

Character::Character(std::string const &name){
    this->_weapon = NULL;
    this->_name = name;
    this->_ap = 40;
}


Character::Character(Character const & src){
    *this = src;
} 


Character::~Character( void ){
   // std::cout << "destructor from Character" << std::endl;
}

/*
    recovers 10 AP upon each call to recoverAP() , up to a maximum of 40
*/
void Character::recoverAP(){
    if(this->_ap < 40 )
        this->_ap += 10;
}

/*
    equip() will just store a pointer to the weapon, there’s 
    no copy involved.
*/
void Character::equip(AWeapon * weapon){
    this->_weapon = weapon;
}

/*
    loses the AP corresponding to the weapon he has on each use.
    No AP, no attack

    Displays "NAME attacks ENEMY_TYPE with a WEAPON_NAME" upon a call to attack().
    ollowd by a call to the current weapon’s attack() method.
    If there’s no equipped weapon, attack() doesn’t do a thing.
    You’ll then substract to the enemy’s HP the damage value of the weapon.
    After that, if the target has 0 HP, you must delete it.
*/
void Character::attack(Enemy *enemy){

	if (this->_ap == 0 || !this->_weapon || !enemy)
		return ;

	if (this->_ap < this->_weapon->getAPCost())
		return ;
    
    std::cout << this->_name << " attacks " << enemy->getType()
		<< " with a " << this->_weapon->getName() << std::endl;
    this->_weapon->attack();

	this->_ap -= this->_weapon->getAPCost();
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHP() == 0)
		delete enemy;
}

std::string const & Character::getName() const {
    return this->_name;
}

Character & Character::operator = (Character const & src){
    
    if(this != &src){
        this->_name = src._name;
        this->_ap = src._ap;
        this->_weapon = src._weapon;
    }
    return *this;
}

AWeapon * Character::getWeapon(){
    return this->_weapon;
}

int Character::getAP(){
    return this->_ap;
}

/*
    You will also implement an overload of the << to ostream operator to display 
    the attributes of your Character .

    This overload will display:
        NAME has AP_NUMBER AP and wields a WEAPON_NAME
    if there’s a weapon equipped. Else, it will display:
        NAME has AP_NUMBER AP and is unarmed
*/
std::ostream & operator << (std::ostream  & o , Character & character){


    if(character.getWeapon() != NULL)
    {
        std::cout <<  character.getName() << " has " << character.getAP() << " AP" << 
        " and wields a " << character.getWeapon()->getName() << std::endl;
    }else
    {
        std::cout <<  character.getName() << " has " << character.getAP() <<
        " and is unarmed" << std::endl;
    }
    return o;

}

