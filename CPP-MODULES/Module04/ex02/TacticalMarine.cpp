#include "TacticalMarine.hpp"

/*
    Upon creation, displays: "Tactical Marine ready for battle!"
*/
TacticalMarine:: TacticalMarine( void ){
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

/* Upon death, displays: "Aaargh..." */
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

/* clone() returns a copy of the current object */
ISpaceMarine *  TacticalMarine::clone() const {
    return new TacticalMarine(*this);
}

/* battleCry() displays: "For the holy PLOT!" */
void  TacticalMarine::battleCry() const {
    std::cout << "For the holy PLOT!" << std::endl;
}

/* rangedAttack() displays: "* attacks with a bolter *"  */
void  TacticalMarine::rangedAttack() const {
    std::cout << "* attacks with a bolter *" << std::endl;
}

/*  meleeAttack() displays: "* attacks with a chainsword *" */
void  TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with a chainsword *" << std::endl;
}