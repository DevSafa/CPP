#ifndef BASE_HPP
# define BASE_HPP

//#include <ctime>
#include <ctime>
#include <cstdlib>
#include <iostream>
class Base {

    public:
        virtual ~Base( void );
};


class WhichOne {
    public :
        WhichOne(void);
        Base *generate(void);
        void  identify(Base *p);
        void identify(Base & p);

};
class A : public Base {
    public:
        virtual ~A(void);
};

class B :public Base {
    public :
        virtual ~B(void );
};

class C: public Base {
    public :
        virtual ~C(void );
};


#endif