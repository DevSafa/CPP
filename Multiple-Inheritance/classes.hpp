#ifndef CLASSES_H
# define CLASSES_H

class A {
    public :
        A( void );
        ~A( void );
};

class B {
    public:
        B( void );
        ~B( void );
};

class C : public B , public A //note the order
{
    public:
        C( void );
        ~C( void );
};


//----------------------------------------
class Person {
    public:
        Person(int x);
};

class Faculty : public Person {
    public :
        Faculty(int x);
};

class Student : public Person {
    public :
        Student(int x);
};

class TA : public Faculty, public Student {
    public :
        TA(int x);
};
#endif
