#include "Base.hpp"

int main()
{
    WhichOne WhichOne;
   // WhichOne.generate();
   A *a = new A();
    WhichOne.identify(a);

   B *b = new B();
   WhichOne.identify(b);

   C *c = new C();
   WhichOne.identify(c);
   
   std::cout << "--------------" << std::endl;
   B &t1 = *(new B());
   WhichOne.identify(t1);

   A &t2 = *(new A());
   WhichOne.identify(t2);

   C &t3 = *(new C());
   WhichOne.identify(t3);
}