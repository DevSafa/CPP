#include "Karen.hpp"
#include <iostream>

int main(int argc , char *argv[])
{
    int level;
    std::string levels[4];
    levels[0]="DEBUG";
    levels[1]="INFO";
    levels[2] ="WARNING";
    levels[3]="ERROR";

    int i = 0;
    while(i < 4)
    {
        if(levels[i] == argv[1])
        {
            level = i;
            break;
        }
        i++;
    }

    switch(level)
    {
        case 0:
            std::cout << "[ Debug ]\n" << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!\n\n" ;
        case 1:
            std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon cost more money.\nYou don’t put enough! If you did I would not have to ask for it!\n\n" ;
        case 2:
            std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month.\n\n";
        case 3:
            std::cout << "[ ERROR ]\n" << "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month.\n\n";
            break;
        default :
            std ::cout << "[ Probably complaining about insignificant problems ]";
    }
}