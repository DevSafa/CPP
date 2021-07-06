#include "RadScorpion.hpp"

RadScorpion::RadScorpion( void ) :Enemy(80, "RadScorpion"){
    //Enemy(80, "RadScorpion");
    std::cout << "* click click click *" << std::endl;
}

// RadScorpion::RadScorpion(int hp, std::string const & type){
//     Enemy(80, type);
// }

RadScorpion::RadScorpion(RadScorpion const & src){
    *this= src;
}
std::string const & RadScorpion::getType(){
    return this->_type;
}
RadScorpion & RadScorpion::operator = (RadScorpion const & src){
    if (this != &src)
    {
        this->_hp = src._hp;
        this->_type = src._type;
    }
    return *this;
}

RadScorpion::~RadScorpion( void ){
    std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage( int damage)
{
    damage = damage - 3;
    if (damage > 0)
        this->_hp--;
    if(this->_hp < 0)
        this->_hp = 0;
}