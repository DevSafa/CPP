#include "TacticalMarine.hpp"


TacticalMarine:: TacticalMarine( void ){
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

 TacticalMarine::~ TacticalMarine( void ){
    std::cout << "Aaargh..." << std::endl;
}

 TacticalMarine::TacticalMarine( TacticalMarine const & src){
    std::cout << "Tactical Marine ready for battle!" << std::endl;
    *this = *this;
}

 TacticalMarine  &  TacticalMarine::operator = ( TacticalMarine const & src){
    (void) src;
    return *this;
}

ISpaceMarine *  TacticalMarine::clone() const {
    return new TacticalMarine(*this);
}

void  TacticalMarine::battleCry() const {
    std::cout << "For the holy PLOT!" << std::endl;
}

void  TacticalMarine::rangedAttack() const {
    std::cout << "* attacks with a bolter *" << std::endl;
}

void  TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with a chainsword *" << std::endl;
}