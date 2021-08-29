#include "Zombie.hpp"

/*
write another function that will create a Zombie, and make it
announce itself. The prototype of the function 
is: void randomChump( std::string name );
*/
void randomChump( std::string name)
{
    /*create a Zombie  on the stack */
     Zombie zombie(name);

    /*make it announce itself*/
     zombie.announce();
}