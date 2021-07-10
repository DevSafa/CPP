#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


int main(){
    AMateria *materia1 = new Cure();
    AMateria *materia2 = new Ice();

   Character *character = new Character("me");
   std::cout << *character;

   std::cout << "----------------" << std::endl;

    character->equip(materia1);
    character->equip(materia2);
    character->equip(materia1);
    character->equip(materia2);
    std::cout << *character;

    std::cout << "----------------" << std::endl;
    character->unequip(2);
    std::cout << *character;

    std::cout << "----------------" << std::endl;
    character->unequip(0);
    std::cout << *character;

    std::cout << "----------------" << std::endl;
    character->unequip(4);
    std::cout << *character;

}