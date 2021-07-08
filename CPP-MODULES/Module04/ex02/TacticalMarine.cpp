#include " TacticalMarine.hpp"


TacticalMarine:: TacticalMarine( void ){
    std::cout << "* teleports from space *" << std::endl;
}

 TacticalMarine::~ TacticalMarine( void ){
    std::cout << "I’ll be back..." << std::endl;
}

 TacticalMarine:: TacticalMarine( TacticaLMarine const & src){
    *this = src;
}

 TacticalMarine &  TacticalMarine::operator = ( TacticalMarine const & src){
    *this = src;
}

ISpaceMarine *  TacticalMarine::clone(){
    return *this;
}

void  TacticalMarine::battleCry() const {
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void  TacticalMarine::rangedAttack() const {
    std::cout << "* does nothing *" << std::endl;
}

void  TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with chainfists *" << std::endl;
}