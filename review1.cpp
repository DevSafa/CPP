#include <iostream>

int main()
{
    double height, weight, bmi ;

    std::cout << "Type in your height (m): ";
    std::cin >> height;

    std::cout << "Type in your weight (kg): ";
    std::cin >> weight;

    //the body mass index
    bmi = (weight / (height *height));

    std::cout << "Your body mass index is: " << bmi << "\n";
    return 0;
}