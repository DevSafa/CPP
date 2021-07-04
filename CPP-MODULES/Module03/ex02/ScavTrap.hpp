#ifndef SCAVTRAP_H
# define SCAVTRAP_H
#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#define BOLDGREEN   "\033[1m\033[32m" 
#define BOLDRED     "\033[1m\033[31m"
#define BOLDYELLOW  "\033[1m\033[33m" 
class ScavTrap  : public ClapTrap{
    public:
        ScavTrap( void );
        ScavTrap(ScavTrap const & src );
        ScavTrap(std::string name );
        ~ScavTrap( void );
        void guardGate() ;
        void highFivesGuys( void );
        ScavTrap & operator = (ScavTrap const & cpy);

};


#endif
