#include "Enemy.hpp"

Enemy::Enemy( int hp, std::string const & type) : _type(type){
    this->_hp = hp;
    //this->_type = type;
}

Enemy::Enemy( void ){
    
}

Enemy::Enemy(Enemy const & src){
    *this= src;
}
void Enemy::setHP(int hp){
    this->_hp = hp;
    if(this->_hp < 0)
        this->_hp = 0;
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

void Enemy::takeDamage(int damage) {
    if (damage > 0)
        this->_hp--;
    if(this->_hp < 0)
        this->_hp = 0;
}
Enemy::~Enemy( void ){

}