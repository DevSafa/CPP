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
        //ScavTrap(ScavTrap const & src );
        ScavTrap(std::string name );
        // ~ScavTrap( void );

        // ScavTrap & operator = (ScavTrap const & cpy);

};


#endif



//https://eng.libretexts.org/Courses/Delta_College/C_-_Data_Structures/04%3A_Inheritence/4.04%3A_Modes_of_Inheritance
/*
Public mode: If we derive a sub class from a public base class. Then the public member of the base class
will become public in the derived class and protected members of the base class will become protected in 
derived class.
*/

/*
https://www.learncpp.com/cpp-tutorial/constructors-and-initialization-of-derived-classes/

before the Derived constructor can do anything substantial, the Base constructor is called first. 
The Base constructor sets up the Base portion of the object, control is returned to the Derived constructor, 
and the Derived constructor is allowed to finish up its job.
*/