#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "Uzi.hpp"
#include "Mala.hpp"

int main(){

    //Test PlasmaRifle class
    std::cout << "\n1--------------" << std::endl;
    PlasmaRifle p1;
    p1.attack();

    std::cout << p1;

    std::cout << "\n2--------------" << std::endl;
    PlasmaRifle p2;
    p2.attack();
    std::cout << p2;

    p1 = p2 ;

    std::cout << p1;

    std::cout << "\n3--------------" << std::endl;

    PlasmaRifle p3(p1);

    std::cout << p3;

    std::cout << "\n4---------------------" << std::endl;

    AWeapon *p4 = new PowerFist();
    

    AWeapon *p5 = new PlasmaRifle();

    p4->attack();
    p5->attack();

    std::cout << *p4;
    delete p5;
    delete p4;

    std::cout << "\n5---------------------" << std::endl;
    
    Enemy enemy1(10, "ee1");
    std::cout << enemy1;

    std::cout << "=====" << std::endl;

    Enemy enemy2(10,"ee2");
    std::cout << enemy2 ;

    std::cout << "=====" << std::endl;
    enemy1 = enemy2;
    std::cout << enemy1;

    std::cout << "=====" << std::endl;
    Enemy enemy3(enemy1);
    std::cout << enemy3;

    std::cout << "\n5---------------------" << std::endl;
    Enemy *enemy4 = new Enemy(44,"ee4");
    std::cout << *enemy4;
    delete enemy4;
    
    std::cout << "\n6---------------------" << std::endl;

    SuperMutant superMutant1;
    SuperMutant *superMutant2 = new SuperMutant();
    delete superMutant2;

    std::cout << "\n7---------------------" << std::endl;
    Enemy *enemy5 = new SuperMutant();

    delete enemy5;
    
    std::cout << "\n8---------------------" << std::endl;

    SuperMutant superMutant3;
    
    RadScorpion radScorpion1;
    
    superMutant3.takeDamage(5);
    radScorpion1.takeDamage(5);

    std::cout << superMutant3;
    std::cout << radScorpion1;

    std::cout << "\n9---------------------" << std::endl;
    
    Enemy *enemy6 = new SuperMutant();
    Enemy *enemy7 = new RadScorpion();

    std::cout << *enemy6 << *enemy7;

    delete enemy6;
    delete enemy7;
    
    std::cout << "\n----------test in subject -----------" << std::endl;

    Character* me = new Character("me");

    std::cout << *me;

    Enemy* b = new RadScorpion();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    me->equip(pr);
    std::cout << *me;
    me->equip(pf);

    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    std::cout << "\n---------------------" << std::endl;

    AWeapon *uzi1 = new Uzi();
    uzi1->attack();
    std::cout << *uzi1;
    delete uzi1;
    std::cout << "\n---------------------" << std::endl;

    Enemy *mala = new Mala();
    std::cout << *mala;
    mala->takeDamage(3);
    std::cout << *mala;
    delete mala;
    std::cout << "\n---------------------" << std::endl;
    return 0;
}