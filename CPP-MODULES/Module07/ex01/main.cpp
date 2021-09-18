#include "iter.hpp"

int main(){
    int i[] ={1,2,4,5,5,7,3};

    
    int len = std::end(i) - std::begin(i);
   
    displayElements(i,len);
    iter(i, len,add5);

    std::cout << "\n------------------------" << std::endl;

    char c[] = {'a','b','c','d','e','f'};
    len = std::end(c) - std::begin(c);
    displayElements(c,len);
    iter(c, len,add5);
    std::cout << std::endl;

    std::cout << "\n------------------------" << std::endl;

    float f[] = {3.1f , 3.3f , 10.0f , 5.3f};
    len = std::end(f) - std::begin(f);
    displayElements(f,len);
    iter(f, len,add5);

    std::cout << "\n------------------------" << std::endl;

    double d[] = {2.2 , 3.3 , 10.0 , 0.3};
    len = std::end(d) - std::begin(d);
    displayElements(d,len);
    iter(d, len,add5);


    // std::cout << "\n------------------------" << std::endl;
    
    // int tab[] = {0,1,2,3,4};

    // Awesome  tab2[5];
    // iter(tab, 5 , print);

    // iter(tab2,5, print);

   

  

}
