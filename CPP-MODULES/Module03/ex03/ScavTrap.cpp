#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap(100,50,20){
    std::cout << "Default constructor called from ScavTrap" << std::endl;

}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50 , 20){
    std::cout << "Parametric constructor called from ScavTrap" << std::endl;
}


ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src){
    std::cout <<  "Copy constructor called from ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout <<"Destructor called from ScavTrap" <<  std::endl;
}

void ScavTrap::guardGate(){

    std::cout << "ScavTrap : " << this->_name << " have enterred in Gate Keeper mode " << std::endl;
}
ScavTrap & ScavTrap::operator = (ScavTrap const &cpy)
{
    ClapTrap::operator = (cpy);
     return *this;
}

void        ScavTrap::attack( std::string const & target ){
    this->_hit_points--;
    this->_attack_damage++;
    std::cout << "scavTrap " << "<" << this->getName() << "> " ;
    std::cout << "attacks " << "<" << target << "> , ";
    std::cout << "causing " << "<" << this->getAttackDamage() << "> ";
    std::cout << "points of damage!" << std::endl;
    
}