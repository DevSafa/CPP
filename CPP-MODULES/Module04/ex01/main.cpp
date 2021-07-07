#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
// #include "Character.hpp"
// #include "RadScorpion.hpp"
int main(){

    //Test PlasmaRifle class
    PlasmaRifle p1;
    p1.attack();

    // std::cout << p1;

    PlasmaRifle p2;
    p2.attack();
    std::cout << p2;

    p1 = p2 ;

    std::cout << p1;


    PlasmaRifle p3(p1);

    std::cout << "---------------------" << std::endl;

    AWeapon *p4 = new PowerFist();
    

    AWeapon *p5 = new PlasmaRifle();

    p4->attack();
    p5->attack();

    std::cout << *p4;
    std::cout << "---------------------" << std::endl;
    delete p5;
    delete p4;
    std::cout << "---------------------" << std::endl;
    
    //Test enemy class
    Enemy enemy1(10, "ee1");
    std::cout << enemy1;

    Enemy enemy2(10,"ee2");
    std::cout << enemy2 ;

    enemy1 = enemy2;
    std::cout << enemy1;

    Enemy enemy3(enemy1);
    std::cout << enemy3;


    Enemy *enemy4 = new Enemy(44,"ee4");
    std::cout << *enemy4;
    delete enemy4;
    
    std::cout << "---------------------" << std::endl;
    SuperMutant superMutant1;
    SuperMutant *superMutant2 = new SuperMutant();
    std::cout << "---------------------" << std::endl;
    // Character* me = new Character("me");
    // std::cout << *me;
    // Enemy* b = new RadScorpion();
    // AWeapon* pr = new PlasmaRifle();
    // AWeapon* pf = new PowerFist();
    // me->equip(pr);
    // std::cout << *me;
    // me->equip(pf);
    // me->attack(b);
    // std::cout << *me;
    // me->equip(pr);
    // std::cout << *me;
    // me->attack(b);
    // std::cout << *me;
    // me->attack(b);
    // std::cout << *me;
return 0;
}