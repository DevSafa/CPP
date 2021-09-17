#include "Array.hpp"


int main(){
    Array<int> a1;
    std::cout << a1 << std::endl;

    Array<int> a2;
    std::cout << a2 << std::endl;

    Array<int> a3(3);
    // std::cout << a3.size();

    try{
        a3[0] = 33;
        a3[1] = 50;
        a3[2] = 30;
        a3[3] = 15;
    }catch(std::exception & e)
    {
        std::cout << "out of range" << std::endl;
    }

    std::cout << a3 << std::endl;
    std::cout << a1 << std::endl;

    std::cout << "-----------" << std::endl;

    int *a = new int(3);
    std::cout << a << std::endl;


    a[0] = 3;
    a[1] = 2;
    a[2] = 4;

    std::cout << a << std::endl;
    std::cout << a[0] << " " << a[1] << " " << a[2] << " " << std::endl;

    std::cout << "-----------" << std::endl;

    Array<int> b(3);
    std::cout << b << std::endl; 

    b[0] = 3;
    b[1] = 2;
    b[2] = 4;

    std::cout << b << std::endl;
   
}