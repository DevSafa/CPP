#include "AssaultTerminator.hpp"

/* Birth: "* teleports from space *" */
AssaultTerminator::AssaultTerminator( void ){
    std::cout << "* teleports from space *" << std::endl;
}

/* Death: "I’ll be back..." */
AssaultTerminator::~AssaultTerminator( void )
{
    std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src){
    std::cout << "* teleports from space *" << std::endl;
    (void) src;
    *this = *this;
}

AssaultTerminator    & AssaultTerminator::operator = (AssaultTerminator  const  & src){
    (void) src;
    return *this;
}

ISpaceMarine * AssaultTerminator::clone() const {
    return  new AssaultTerminator(*this);
}

/* battleCry() : "This code is unclean. PURIFY IT!" */
void AssaultTerminator::battleCry() const {
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

/* rangedAttack : "* does nothing *" */
void AssaultTerminator::rangedAttack() const {
     std::cout << "* does nothing *" << std::endl;
}

/* meleeAttack : "* attacks with chainfists *" */
void AssaultTerminator::meleeAttack() const {
    std::cout << "* attacks with chainfists *" << std::endl;
}


