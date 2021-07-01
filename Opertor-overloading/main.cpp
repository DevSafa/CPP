#include <iostream>
#include "Position.hpp"

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
     return 0;
}