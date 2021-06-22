#include <iostream>

int main()
{
    int number = 9;

    switch(number)
    {
        case 7:
            std::cout << "Squirtle\n";
            break;
        case 8:
            std::cout << "Wartortle\n";
            break;
        case 9:
            std::cout << "Blastoise\n";
            break;
        default :
            std::cout << "Unknown\n";
            break;
    }
}