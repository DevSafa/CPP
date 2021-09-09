#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap(100, 100, 30) {
    std::cout << "Default constructor called from FragTrap"  << std::endl;
}

FragTrap::~FragTrap( void ) {
   std::cout << "Destructor called from FragTrap" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src) {
    std::cout <<  "Copy constructor called from FragTrap" << "\033[0m" << std::endl;

}

FragTrap::FragTrap(std::string name) : ClapTrap(name , 100, 100, 30){
    std::cout << "Parametric constructor called from ClapTrap" << std::endl;   
}


FragTrap & FragTrap::operator = (FragTrap const & cpy){
    ClapTrap::operator = (cpy);
    return *this;
}

void FragTrap::highFivesGuys( void ){
    std::cout << "Hight five from FragTrap!!"<< std::endl;
}

void        FragTrap::attack( std::string const & target ){
    this->_hit_points--;
    this->_attack_damage++;
    std::cout << "fragTrap " << "<" << this->getName() << "> " ;
    std::cout << "attacks " << "<" << target << "> , ";
    std::cout << "causing " << "<" << this->getAttackDamage() << "> ";
    std::cout << "points of damage!" << std::endl;
    
}

void FragTrap::initializeDiamond( DiamondTrap & diamond)
{
    diamond.setHitPoints(_hit_points);
    diamond.setAttackDamage(_attack_damage);
}