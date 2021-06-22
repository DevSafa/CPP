#include <iostream>

int main ()
{
    double tempc;
    double tempf;

    std::cout << "Enter the temperature is Fahrenheit:\n";
    std::cin >> tempf;

    tempc = (tempf - 32) / 1.8;

    std::cout << "The temp is " << tempc << " degrees Celsius.\n";
}