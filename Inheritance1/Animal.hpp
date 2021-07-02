#ifndef ANIMAL_H
# define ANIMAL_H
#include <iostream>
//base class
class Animal {
    public:
        void eat();
        void sleep();
};

// we use the keyword public while inheriting Dog from Animal
//we can also use the keywords private and protected instead of public
class Dog : public Animal {
    public:
        void bark();
};

#endif