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


#endif
