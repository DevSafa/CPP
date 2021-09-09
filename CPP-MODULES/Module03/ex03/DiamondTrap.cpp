#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )  {
    std::cout << "DiamondTrap constructor" << std::endl;
}
DiamondTrap::~DiamondTrap( void ) {
    std::cout << "DiamondTrap destructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name){
    std::cout << name << std::endl;
    
    std::cout << "scavTrap" <<  ScavTrap::getHitPoints() << "---" << std::endl;
    std::cout << "clapTrap" << ClapTrap::getHitPoints() << "---" << std::endl;
    std::cout << "fragTrap" << FragTrap::getHitPoints() << "---" << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const & src) {
    (void)src;
        std::cout << "DiamondTrap copy constructor" << std::endl;
        

}