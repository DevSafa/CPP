#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap(){
    std::cout << BOLDGREEN << "Default constructor called from ScavTrap" << "\033[0m"  << std::endl;

}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << BOLDGREEN << "Parametric constructor called from ScavTrap" << "\033[0m" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << BOLDRED<< "Destructor called from ScavTrap" << "\033[0m" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const & src){
    *this = src;
}

void ScavTrap::guardGate(){

    std::cout << "ScavTrap : " << this->_name << " have enterred in Gate Keeper mode " << std::endl;
}
ScavTrap & ScavTrap::operator = (ScavTrap const &cpy)
{
     std::cout << BOLDYELLOW << "operator overload (=) " <<  "\033[0m" << std::endl;
     if(this != &cpy)
     {
        this->_name = cpy.getName();
        this->_hit_points = cpy.getHitPoints();
        this->_attack_damage = cpy.getAttackDamage();
        this->_energy_points = cpy.getEnergyPoints();
     }
     return *this;
}

