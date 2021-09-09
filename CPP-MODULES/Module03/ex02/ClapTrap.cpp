#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) :   _hit_points(10) ,_energy_points(10), _attack_damage(0){
    std::cout << "Default constructor called from ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) ,  _hit_points(10) ,_energy_points(10) , _attack_damage(0) {
    std::cout << "Parametric constructor called from ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout <<  "Copy constructor called from ClapTrap" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap( void )
{
    std::cout <<"Destructor called from ClapTrap" <<  std::endl;
}

ClapTrap & ClapTrap::operator = (ClapTrap const &cpy ){
  //  std::cout << "operator overload (=) " << std::endl;
    if(this != &cpy)
    {
        this->_name = cpy.getName();
        this->_hit_points = cpy.getHitPoints();
        this->_attack_damage = cpy.getAttackDamage();
        this->_energy_points = cpy.getEnergyPoints();
    }
    return *this;
}
std::ostream &operator << (std::ostream & o , ClapTrap &clapTrap){
   // std::cout <<  "operator overload (<<) " <<   std::endl;
    o << "Name                  : " << clapTrap.getName() << std::endl;
    o << "Energy points         : " << clapTrap.getEnergyPoints() << std::endl;
    o << "Hit points            : " << clapTrap.getHitPoints() << std::endl;
    o << "Attack damage         : " << clapTrap.getAttackDamage() << std::endl; 
    return o;
}

std::string ClapTrap::getName( void ) const
{
    return this->_name;
}

int         ClapTrap::getHitPoints( void ) const
{
    return this->_hit_points;
}

int          ClapTrap::getEnergyPoints( void ) const
{
    return this->_energy_points;
}

int        ClapTrap::getAttackDamage( void ) const
{
    return this->_attack_damage;
}

void        ClapTrap::attack( std::string const & target ){
    this->_hit_points--;
    this->_attack_damage++;
    std::cout << "ClapTrap " << "<" << this->getName() << "> " ;
    std::cout << "attacks " << "<" << target << "> , ";
    std::cout << "causing " << "<" << this->getAttackDamage() << "> ";
    std::cout << "points of damage!" << std::endl;
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->_hit_points -=amount;
    this->_energy_points -=amount;
    std::cout << "ClapTrap " << "<" << this->getName() << "> " ;
    std::cout << "took damage " << " with  an amount of "  <<  "<" <<  amount << ">" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->_hit_points+=amount;
    this->_energy_points+= amount;
    std::cout << "ClapTrap " << "<" << this->getName() << "> " ;
    std::cout << "be repaired " << " with an amount of "  <<  "<" << amount << ">" << std::endl;
 
}


void         ClapTrap::setName( std::string const & name ){
    this->_name = name;
}
void         ClapTrap::setHitPoints( int & hitPoints ){
    this->_hit_points = hitPoints;
}
void         ClapTrap::setEnergyPoints( int & energyPoints ){
    this->_energy_points = energyPoints;
}
void         ClapTrap::setAttackDamage( int & attackDamage ){
    this->_attack_damage = attackDamage;
}

ClapTrap::ClapTrap(int  hitPoints , int  energyPoints , int  attackDamage){
    std::cout << "constructor called from ClapTrap" << std::endl;

    this->_hit_points = hitPoints;
    this->_energy_points = energyPoints;
    this->_attack_damage = attackDamage;
}

ClapTrap::ClapTrap(std::string  name , int  hitPoints , int  energyPoints , int  attackDamage){
    std::cout << "constructor called from ClapTrap" << std::endl;
    this->_name = name;
    this->_hit_points = hitPoints;
    this->_energy_points = energyPoints;
    this->_attack_damage = attackDamage;
}