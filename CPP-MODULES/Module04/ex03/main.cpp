#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main(){
//     AMateria *materia1 = new Cure();
//     AMateria *materia2 = new Ice();

//    Character *character = new Character("me");
//    std::cout << *character;

//    std::cout << "----------------" << std::endl;

//     character->equip(materia1);
//     character->equip(materia2);
//     character->equip(materia1);
//     character->equip(materia2);
//     std::cout << *character;

//     std::cout << "----------------" << std::endl;
//     character->unequip(2);
//     std::cout << *character;

//     std::cout << "----------------" << std::endl;
//     character->unequip(0);
//     std::cout << *character;

//     std::cout << "----------------" << std::endl;
//     character->unequip(4);
//     std::cout << *character;

//     std::cout << "----------------" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
delete me;
delete src;

}