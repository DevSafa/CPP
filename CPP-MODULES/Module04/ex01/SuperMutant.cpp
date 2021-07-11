#include "SuperMutant.hpp"

/*
    HP: 170
    Type: "Super Mutant"

    On birth, displays: "Gaaah. Me want smash heads!"
*/

SuperMutant::SuperMutant(void ) :Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

/*
    Upon death, displays: "Aaargh..."
*/
SuperMutant::~SuperMutant( void ){
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(src){
    *this = src;
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

/*
    Overloads takeDamage to take 3 less damage points than normal (Yeah, they’re kinda strong, 
    these guys.)
*/
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