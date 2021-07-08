#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator( void ){
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator( void )
{
    std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const  & src){
    *this = src;
   
}

AssaultTerminator const  & AssaultTerminator::operator = (AssaultTerminator  const  & src){
    return  src ;
}

ISpaceMarine * AssaultTerminator::clone() const {
    return  new AssaultTerminator(*this);
}

void AssaultTerminator::battleCry() const {
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const {
     std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
    std::cout << "* attacks with chainfists *" << std::endl;
}


