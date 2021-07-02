#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : _ClapTrap(){
    //default construction
    // this->_hit_points = 100;
    // this->_energy_points = 50;
    // this->_attack_damage = 20;
    std::cout << BOLDGREEN << "Default constructor called from ScavTrap" << "\033[0m"  << std::endl;



ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << BOLDGREEN << "Parametric constructor called from ScavTrap" << "\033[0m" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << BOLDRED<< "Destructor called from ClapTrap" << "\033[0m" << std::endl;
}