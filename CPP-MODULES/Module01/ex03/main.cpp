#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    Weapon      club = Weapon("Crude spiked club");
    HumanA      bob("Bob",club);
    bob.attack();
    club.setType("Some other type of club");
    bob.attack();

    std::cout << "----------------------" << std::endl;

    Weapon      club1 = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(&club1);
    jim.attack();
}