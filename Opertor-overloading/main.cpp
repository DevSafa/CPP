
#include "Position.hpp"
#include "Integer.hpp"
#include "Canonical.hpp"
int main()
{
    Position pos1, pos2 ;

    pos1.setx(10); pos1.sety(3);
    pos2.setx(10); pos2.sety(3);

    //we nned to overload the + operator to teach the compiler how to add two positions
    Position pos3 = pos1 + pos2;
    std::cout << "pos3.x = " << pos3.getx() << std::endl;
    std::cout << "pos3.y = " << pos3.gety() << std::endl ;

    pos2.setx(30);
    if(pos1 == pos2)
        std::cout << "pos1 and pos2  are the same!" << std::endl;
    else
        std::cout << "pos1 and pos2 aren't the same!" << std::endl;

    std::cout << "-----------------\n";
    std::cout << pos1 << std::endl; 
    std::cout << "-----------------\n";
    std::cout << pos2 << std::endl;
    std::cout << "-----------------\n";
    std::cout << pos3 << std::endl;

    std::cout << "------------------------------\n";
    //Position pos4;

   // std::cin >> pos4 ;

    //std::cout << pos4;

    std::cout << "------------------------------\n";
    // 3 instances of Integer class
    Integer x(30);
    Integer y(10);
    Integer z(0);

    //calling overloadd of << operator
    std::cout << "Value of x : " << x << std::endl;
    std::cout << "Value of y : " << y << std::endl;
    //calling overload of a ssignement operator
    y = Integer( 12 );
    std::cout << "Value of y : " << y << std::endl;
    std::cout << "Value of z : " << z << std::endl;
    // assignement of z instance on result of  x + y 
    z = x + y;
    std::cout << "Value of z : " << z << std::endl;

    std::cout << "------------------------------\n";
    Canonical instance1;
    Canonical instance2(42);
    Canonical instance3(instance1);

    std::cout << instance1 << std::endl;
    std::cout << instance2 << std::endl;
    std::cout << instance3 << std::endl;
    instance3 = instance2 ;

    std::cout << instance3 << std::endl;
    
    return 0;
}

