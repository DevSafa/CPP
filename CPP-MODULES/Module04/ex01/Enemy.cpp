#include "Enemy.hpp"

/*
    An enemy has a number of hit points and a type.
*/

Enemy::Enemy( int hp, std::string const & type) {
    this->_hp = hp;
    this->_type = type;
}

Enemy::Enemy(Enemy const & src){
    *this= src;
}


Enemy & Enemy::operator = (Enemy const & src){

    if(this != &src)
    {
        this->_hp = src._hp;
        this->_type = src._type;
    }
    return *this;
}

std::string const & Enemy::getType() const{
    return this->_type;
}

int Enemy::getHP() const{
    return this->_hp;
}

Enemy::~Enemy( void ){
   
}

/*
    An enemy can take damage (which reduces his HP)
    If the damage is <0, don’t do anything
    An enemy should also not go below 0 HP.
*/
void Enemy::takeDamage(int damage) {
    
    if (damage < 0)
	    return ;
    this->_hp -= damage;
    if(this->_hp < 0)
        this->_hp = 0;
}



std::ostream  & operator << (std::ostream &  o, Enemy & enemy){

    o << "hp : " << enemy.getHP() << std::endl;
    o << "type : " << enemy.getType() << std::endl;

    return o;
}