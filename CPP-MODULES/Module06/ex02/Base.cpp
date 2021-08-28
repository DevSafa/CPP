#include "Base.hpp"

Base::~Base(void)
{

}

A::~A( void )
{

}

B::~B( void )
{

}

C::~C( void )
{

}

WhichOne::WhichOne( void )
{
    /*initialize random seed*/
    std::srand(time(0));
}

Base *WhichOne::generate( void)
{
    // random numbers between 0 - 2;
    int random = rand() % 3;
    if(random ==  0)
        return new A();
    if(random == 1 )
        return new B();
    if(random == 2)
        return new C();
    return NULL;
}

void  WhichOne::identify(Base *p){
    A *a =dynamic_cast<A*>(p);
    if(a != NULL)
    {
        std::cout << "A" << std::endl;
        return ;
    }

    B *b = dynamic_cast<B*>(p);
    if(b != NULL)
    {
        std::cout << "B" << std::endl;
        return;
    }

    C *c = dynamic_cast<C*>(p);
    if(c != NULL)
    {
        std::cout << "C" << std::endl;
        return;
    }
}

void WhichOne::identify(Base & p)
{
   try{
        A &a =dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
        return ;
   }
   catch(std::bad_cast & e)
   {

   }
   try{
        B &b =dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)b;
        return ;
   }catch(std::bad_cast & e)
   {

   }

    try{
        C &b =dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)b;
        return ;
   }catch(std::bad_cast & e)
   {

   }
    
}