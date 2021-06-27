#include "Zombie.hpp"

int main()
{
    int n = 5;
    int i = 0;
    Zombie *zombies = zombieHorde(n, "safa");
    while(i < n)
    {
        zombies[i].announce();
        i++;
    }

    std::cout << "------------------------\n";
    //delete all zombies
    delete [] zombies;
    return 0;
}