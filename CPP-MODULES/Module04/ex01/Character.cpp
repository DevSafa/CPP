#include "Character.hpp"

Character::Character(std::string const &name){
    this->_weapon = NULL;
    this->_name = name;
    this->_ap = 40;
}

Character::~Character( void ){

}

void Character::recoverAP(){
    if(this->_ap < 40 )
        this->_ap += 10;
}

void Character::equip(AWeapon * weapon){
    this->_weapon = weapon;
}

void Character::attack(Enemy *enemy){
   // std::cout << enemy->getHP() << std::endl;
    if (this->_ap < this->_weapon->getAPCost())
        return;
    if (enemy && this->_weapon && this->_ap != 0)
    {
        std::cout <<this->_name << " attacks " << enemy->getType() << " with a " 
                << this->_weapon->getName() << std::endl;
        this->_weapon->attack();
        this->_ap -= this->_weapon->getAPCost();
        enemy->takeDamage(this->_weapon->getDamage());
        enemy->setHP(enemy->getHP()- this->_weapon->getDamage());
         if(enemy->getHP() == 0)
            delete enemy;
        
    }
   
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
Character::Character(Character const & src){
    *this = src;
} 

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

int Character::getAP(){
    return this->_ap;
}