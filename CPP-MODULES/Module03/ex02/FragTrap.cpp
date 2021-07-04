#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
    this->setValues(100,100,30);
    std::cout << BOLDGREEN << "Default constructor called from FragTrap" << "\033[0m"  << std::endl;
}

FragTrap::~FragTrap( void ) {
   this->setValues(100,100,30);
   std::cout << BOLDRED << "Destructor called from FragTrap" << "\033[0m" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src) {
    this->setValues(100,100,30);
    std::cout << BOLDGREEN <<  "Copy constructor called from FragTrap" << "\033[0m" << std::endl;

}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    this->setValues(100,100,30); 
    std::cout << BOLDGREEN << "Parametric constructor called from ClapTrap" << "\033[0m" << std::endl;   
}

void FragTrap::setValues(int hit_points, int energy_points,int attack_damage){
    this->_hit_points= hit_points;
    this->_energy_points = energy_points;
    this->_attack_damage = attack_damage;
}

// FragTrap & FragTrap::operator = (FragTrap const & cpy){
//     std::cout << BOLDYELLOW << "operator overload (=) FragTrap" <<  "\033[0m" << std::endl;
//     if(this != &cpy)
//      {
//         this->_name = cpy.getName();
//         this->_hit_points = cpy.getHitPoints();
//         this->_attack_damage = cpy.getAttackDamage();
//         this->_energy_points = cpy.getEnergyPoints();
//      }
    
//     return *this;
// }

void FragTrap::highFivesGuys( void ){
    std::cout << "Hight five from FragTrap!!"<< std::endl;
}