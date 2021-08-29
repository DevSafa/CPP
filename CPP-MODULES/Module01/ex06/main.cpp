#include "Karen.hpp"
#include <iostream>

int main(int argc , char *argv[])
{
    if(argc != 2)
    {
        std::cout << "Invalid number of arguments!!!" << std::endl;
        return 0;
    }
    int level = -1;
    std::string levels[4];
    levels[0]="DEBUG";
    levels[1]="INFO";
    levels[2] ="WARNING";
    levels[3]="ERROR";

    
    for(int i = 0 ; i < 4 ; i++)
    {
         if(levels[i] == argv[1])
        {
            level = i;
            break;
        }
    }
   Karen karen;
    switch(level)
    {
        case 0:
            karen.complain("debug");
        case 1:
            karen.complain("info");
        case 2:
            karen.complain("warning");
        case 3:
            karen.complain("error");
            break;
        default :
            std ::cout << "[ Probably complaining about insignificant problems ]\n";
    }
}