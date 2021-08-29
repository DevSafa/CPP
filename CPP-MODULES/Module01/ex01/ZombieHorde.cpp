#include "Zombie.hpp"

/*
Write a function that takes an integer N.
The function is prototyped as follows:
    Zombie* zombieHorde( int N, std::string name );
*/

Zombie* zombieHorde( int N, std::string name )
{
    /* it allocates N Zombie objects. */
    /* It must allocate all the N Zombie objects in a single allocation. */
    Zombie *zombies= new Zombie[N];

    /* it should initialize each Zombie by giving to each one a name */
    for(int i = 0 ; i < N ; i++)
        zombies[i].setName(name);

    /* it should return the pointer to the first Zombie. */
    return zombies;
}