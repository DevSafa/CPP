#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"


int main(){

    std::cout << "\n--------- create instances of AssaultTerminator in heap ----------\n" <<  std::endl;

    ISpaceMarine *bin = new AssaultTerminator;
    ISpaceMarine *din = bin->clone();
    std::cout << "address of bin : " << bin << std::endl;
    std::cout << "address of din : " << din << std::endl;

    std::cout <<"\n--------- call AssaultTerminator methods ----------\n" <<  std::endl;

    bin->battleCry();
    bin->rangedAttack();
    bin->meleeAttack();

    std::cout << "\n--------- call cloned AssaultTerminator methods ----------\n" <<  std::endl;

    din->battleCry();
    din->rangedAttack();
    din->meleeAttack();

    std::cout <<  "\n--------- delete instances (bin - din) ----------\n" <<   std::endl;
    delete bin ;
    delete din;

    std::cout << "\n--------- create instances of AssaultTerminator in stack ----------\n" <<  std::endl;
    
    AssaultTerminator a1;

    std::cout << "\n--------- call AssaultTerminator methods ----------\n" << std::endl;
    
    a1.battleCry();
    a1.rangedAttack();
    a1.meleeAttack();

    std::cout <<  "\n--------- cloning a stack instance and returning heap instance  + delete ----------\n" <<  std::endl;
    
    ISpaceMarine *a2 = a1.clone();
    std::cout << "address of a1  : "  << &a1 << std::endl;
    std::cout << "address of a2  : " << a2 << std::endl;
    delete a2;
    
    std::cout << "\n--------- create TacticalMarine instances in heap ----------\n" << std::endl;

    ISpaceMarine *spaceMarine1 = new TacticalMarine;
    ISpaceMarine *spaceMarine2 = new TacticalMarine;

    std::cout <<  "\n--------- called methods of TacticalMarine ----------\n" <<  std::endl;

    spaceMarine1->battleCry();
    spaceMarine1->rangedAttack();
    spaceMarine1->meleeAttack();

    std::cout <<  "\n--------- cloning a Tactical Marine + calling methods ----------\n" << std::endl;

    ISpaceMarine *spaceMarine3 = spaceMarine1->clone();

    spaceMarine3->battleCry();
    spaceMarine3->rangedAttack();
    spaceMarine3->meleeAttack();

    std::cout << "\n--------- delete tacticalMarines instances----------\n" << std::endl;
    delete spaceMarine1 ;
    delete spaceMarine2;
    delete spaceMarine3;

    std::cout <<  "\n--------- end----------\n" <<  std::endl;
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
   

    Squad *squad1 = new Squad();
    squad1->push(bob);
    squad1->push(jim);
    std::cout <<  "\n-------- Squad(squad1) ----------\n" <<   std::endl;
    
    for(int i=0 ; i < squad1->getCount() ; i++ )
    {
        ISpaceMarine * unit = squad1->getUnit(i);
        unit->battleCry();
        unit->rangedAttack();
        unit->meleeAttack();
        if(i != squad1->getCount() - 1)
            std::cout << "======" << std::endl;
    }

    TacticalMarine* jack = new TacticalMarine;
    ISpaceMarine* matya = bob->clone();
   
    //copy constructor.
    Squad *squad2 = new Squad(*squad1);
    squad2->push(jack);
    squad2->push(matya);
    squad2->push(jack);
    std::cout <<  "\n--------Squad(squad2)----------\n" << std::endl;
    for(int i=0 ; i < squad2->getCount() ; i++ )
    {
        ISpaceMarine * unit = squad2->getUnit(i);
        unit->battleCry();
        unit->rangedAttack();
        unit->meleeAttack();
        if(i != squad2->getCount() - 1)
            std::cout << "======" << std::endl;
    }
    delete squad1;
    delete squad2;
    std::cout << "\n--------Squad(vlc)----------\n" <<   std::endl;

    ISpaceMarine* bob1 = new TacticalMarine;
    ISpaceMarine* jim1 = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob1);
    vlc->push(jim1);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
    std::cout <<  "\n--------end(vlc)----------\n" <<   std::endl;

    std::cout << "\n-------- test copy constructor AssaultTerminator ----------\n" <<   std::endl;

    AssaultTerminator *assaultTerminator1 = new AssaultTerminator();
    assaultTerminator1->battleCry();
    assaultTerminator1->rangedAttack();
    assaultTerminator1->meleeAttack();

    std::cout << "=======" << std::endl;

    AssaultTerminator *assaultTerminator2 = new AssaultTerminator(*assaultTerminator1);
    assaultTerminator1->battleCry();
    assaultTerminator1->rangedAttack();
    assaultTerminator1->meleeAttack();
    
    std::cout << "=======" << std::endl;

    std::cout << "address of assaultTerminator1 :" << assaultTerminator1 << std::endl;
    std::cout << "address of assaultTerminator2 :" << assaultTerminator2 << std::endl;

    delete assaultTerminator1;
    delete assaultTerminator2;

    std::cout << "\n-------- test copy constructor TacticalMarine ----------\n" <<   std::endl;

    TacticalMarine *tacticalMarines1 = new TacticalMarine();
    tacticalMarines1->battleCry();
    tacticalMarines1->rangedAttack();
    tacticalMarines1->meleeAttack();

    std::cout << "=======" << std::endl;

    ISpaceMarine *tacticalMarines2 = new TacticalMarine(*tacticalMarines1);
    tacticalMarines2->battleCry();
    tacticalMarines2->rangedAttack();
    tacticalMarines2->meleeAttack();

    std::cout << "=======" << std::endl;

    std::cout << "address of tacticalMarines1 :" << tacticalMarines1 << std::endl;
    std::cout << "address of tacticalMarines22 :" << tacticalMarines2 << std::endl;

    delete tacticalMarines1;
    delete tacticalMarines2;
    std::cout <<  "\n--------end----------\n" <<   std::endl;

    std::cout << "\n-------- test Assignation operator Squad ----------\n" <<   std::endl;

    Squad *s1 = new Squad();

    Squad *s2 = new Squad();

    ISpaceMarine * as1 = new AssaultTerminator();
    ISpaceMarine * tm1 = new TacticalMarine();

    s1->push(as1);
    s1->push(tm1);

    s2->push(tm1);
   
    std::cout << "\n======= display element of Squad(s1) ======\n" << std::endl;
    for(int i = 0 ; i < s1->getCount() ; i++)
    {
        s1->getUnit(i)->battleCry();
    }

    *s2 = *s1;
    std::cout << "\n======= display element of Squad(tm1) ======\n" << std::endl;
    for(int i = 0 ; i < s2->getCount() ; i++)
    {
        s2->getUnit(i)->battleCry();
    }
    std::cout <<  "\n--------end----------\n" <<   std::endl;
    return 0;
}