#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap  :public  virtual ClapTrap{
    public:
        ScavTrap( void );
        ScavTrap(ScavTrap const & src );
        ScavTrap(std::string name );
        ~ScavTrap( void );
        void guardGate() ;
        void attack(std::string const & target);
        ScavTrap & operator = (ScavTrap const & cpy);

};


#endif

