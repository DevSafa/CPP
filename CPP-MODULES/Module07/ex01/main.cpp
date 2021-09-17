#include "iter.hpp"

int main(){
    int i[] ={1,2,4,5,5,7,3};

    
    int len = std::end(i) - std::begin(i);
   
    displayElements(i);
    iter(i, len,add5<int>);
    displayElements(i);

    std::cout << "------------------------" << std::endl;

    std::string a = "hello";
    displayElements(a);
    len = a.length();
    iter(a, len,add5<char>);
    displayElements(a);

    std::cout << "------------------------" << std::endl;

    char c[] = {'a','b','c','d','e','f'};
    displayElements(c);
    len = std::end(c) - std::begin(c);
    iter(c, len,add5<char>);
    displayElements(c);

    std::cout << "------------------------" << std::endl;

    float f[] = {3.1f , 3.3f , 10.0f , 5.3f};
    displayElements(f);
    len = std::end(f) - std::begin(f);
    iter(f, len,add5<float>);
    displayElements(f);

    std::cout << "------------------------" << std::endl;
    double d[] = {2.2 , 3.3 , 10.0 , 0.3};
    displayElements(d);
    len = std::end(d) - std::begin(d);
    iter(d, len,add5<double>);
    displayElements(d);


    std::cout << "------------------------" << std::endl;
    
//    int tab[] = {0,1,2,3,4};

//     Awesome tab2[5];
//     iter(tab, 5 , print);

    //iter(tab2,5, print<Awesome>);

   
    

  

}

/*
std::cout << "std::end(d)" << std::end(d) <<  " " << &(d[7]) << std::endl;
std::cout << "std::begin(d)" << std::begin(d) << " " << &(d[0]) << std::endl;

*/