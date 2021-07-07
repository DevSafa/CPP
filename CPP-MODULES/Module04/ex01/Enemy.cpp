#include "Enemy.hpp"

Enemy::Enemy( int hp, std::string const & type) {
    this->_hp = hp;
    this->_type = type;
}

Enemy::Enemy( void ){
    
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

void Enemy::takeDamage(int damage) {
    //std::cout << "takeDamage() : Enemy" << std::endl;
    if (damage < 0)
	    return ;
    this->_hp -= damage;
    if(this->_hp < 0)
        this->_hp = 0;
}
Enemy::~Enemy( void ){
    std::cout << "destructor called (enemy)" << std::endl;
}

std::ostream  & operator << (std::ostream &  o, Enemy & enemy){

    o << "hp : " << enemy.getHP() << std::endl;
    o << "type : " << enemy.getType() << std::endl;

    return o;
}