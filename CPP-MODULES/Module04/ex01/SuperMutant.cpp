#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void ) :Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant( void ){
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(src){
    *this = src;
}
void SuperMutant::takeDamage(int damage) {
    damage = damage - 3 ;
    if (damage < 0)
	    return ;
    this->_hp -= damage;
    if(this->_hp < 0)
        this->_hp = 0;
}

SuperMutant & SuperMutant::operator = (SuperMutant const & src){
    if(this != &src){
        this->_hp = src._hp;
        this->_type = src._type;
    }
    return *this;
}