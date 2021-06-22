#include <iostream>

int main()
{
    // << we use this operator to chain the thing you want to output

    int age;

    age = 28;
    std::cout << "Hello , I'am ";
    std::cout << age;
    std::cout << " years old\n";

    //Or
    int score;
    
    score = 0;
    std::cout << "Hello , I'am " << age << " years old \n";
    std::cout << "Player score: " << score << "\n";
}