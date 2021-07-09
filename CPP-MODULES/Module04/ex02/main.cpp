#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"
int main(){

     ISpaceMarine *bob = new AssaultTerminator;
    ISpaceMarine *jim = bob->clone();
    std::cout << "address of bob : " << bob << std::endl;
    std::cout << "address of jim  : " << jim << std::endl;

    std::cout << "-------------------"<< std::endl;

    bob->battleCry();
    bob->rangedAttack();
    bob->meleeAttack();

    std::cout << "-------------------"<< std::endl;

    jim->battleCry();
    jim->rangedAttack();
    jim->meleeAttack();

    std::cout << "-------------------"<< std::endl;
   // delete bob ;
    //delete jim;
    std::cout << "-------------------"<< std::endl;

    AssaultTerminator a1;
    a1.battleCry();
    a1.rangedAttack();
    a1.meleeAttack();
    ISpaceMarine *a2 = a1.clone();
    std::cout << "address of a1  : "  << &a1 << std::endl;
    std::cout << "address of a2  : " << a2 << std::endl;
    delete a2;
    std::cout << "-------------------"<< std::endl;

    ISpaceMarine *spaceMarine1 = new TacticalMarine;
    ISpaceMarine *spaceMarine2 = new TacticalMarine;

    std::cout << "-------------------"<< std::endl;

    spaceMarine1->battleCry();
    spaceMarine1->rangedAttack();
    spaceMarine1->meleeAttack();
    std::cout << "-------------------"<< std::endl;

    ISpaceMarine *spaceMarine3 = spaceMarine1->clone();

    spaceMarine3->battleCry();
    spaceMarine3->rangedAttack();
    spaceMarine3->meleeAttack();
    std::cout << "-------------------"<< std::endl;
    Squad *squad = new Squad;
    squad->push(bob);
    squad->push(jim);
    squad->push(bob);
    squad->push(&a1);
    squad->push(spaceMarine1);
    squad->push(spaceMarine2);
    int i = 0;
    while (i < squad->getCount())
    {
         (squad->getUnit(i))->battleCry();
         (squad->getUnit(i))->rangedAttack();
         (squad->getUnit(i))->meleeAttack();
         std::cout << "**************" << std::endl;
         i++;
    }

    std::cout << "-------------------"<< std::endl;
}