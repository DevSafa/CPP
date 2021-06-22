#include <iostream>
#include <string>

class Myclass {
    public:
        int myNum;
        std::string myString;
};

class Car {
    //access specifier to make members of MyClass accessible from outside the class.
    public:
        std::string brand;
        std::string model;
        int year;
};

int main()
{
    Myclass myObj;

    myObj.myNum = 15;
    myObj.myString = "some text";

    std::cout << myObj.myNum << "\n";
    std::cout << myObj.myString;

    std::cout << "\n----------------\n";

    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    Car carObj2;
    carObj2.brand ="Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    std::cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    std::cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;
}

