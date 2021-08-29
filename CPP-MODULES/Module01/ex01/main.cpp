#include "Zombie.hpp"

int main()
{
    int n = 5;

    Zombie *zombies = zombieHorde(n, "safa");

    /*
        calling announce() on each one of the Zombies
    */
    for(int i = 0 ; i < n ; i++)
        zombies[i].announce();
  
    std::cout << "------------------------\n";

    /* Do not forget to delete ALL the Zombies when you don’t need them anymore */
    delete [] zombies;
    return 0;
}