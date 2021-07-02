#ifndef ANIMAL_H
# define ANIMAL_H
#include <iostream>
#include <string>
class Animal {
    private:
        //the private variable coloor cannot be initialized in Dog
        std::string color;
    // since the protected keyword hides data , we cannot access type directly from an
    //object of Dog or Animal class 
    protected:
    // the variable type is protected and is thus accessible from the derived class Dog
        std::string type;

    public:
        void eat();
        void sleep();
        void setColor(std::string clr);
        std::string getColor();
};

//derived class
class Dog : public Animal {
    public:
        void setType(std::string tp);
        void displayInfo(std::string c);
        void bark();
};
#endif