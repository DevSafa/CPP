#include <string>
#include <iostream>


int main()
{
    std::string myString;

    myString = "HI THIS IS BRAIN";

    //Create a stringPTR which is a pointer to the string
    std::string *stringPTR;
    stringPTR = &myString;

    // stringREF which is a reference to the string.
    std::string &stringREF = myString;

    //display the address in memory of the string
    std::cout << "address of the string :                 " << &myString << std::endl;

    //display the address of the string by using stringPTR
    std::cout << "address of the string using pointer :   " << stringPTR << std::endl;

    //display the address of the string by using stringREF
    std::cout << "address of the string using reference : " << &stringREF << std::endl;

    std::cout << "----------------------" << std::endl;

    //display the string using the pointer
    std::cout << "diplay the string using the pointer    : " << *stringPTR << std::endl;
    
    //display the string using the reference
    std::cout << "diplay the string using the reference  : " << stringREF << std::endl;

}