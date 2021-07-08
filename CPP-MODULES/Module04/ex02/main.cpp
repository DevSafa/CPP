#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

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
    delete bob ;
    delete jim;
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
    delete spaceMarine1;
    delete spaceMarine2;
    std::cout << "-------------------"<< std::endl;
}