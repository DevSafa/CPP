#include "Array.hpp"


int main(){
    std::cout << "\n1-----------------------" << std::endl;
    Array<int> a1(4);
    try{
        a1[0] = 3;
        a1[1] = 10;
        a1[2] = 13;
        a1[3] = -1;
        a1[4] = -4;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
   
    std::cout << "size of a1 : " << a1.size() << std::endl;
    std::cout << a1[0] << " " << a1[1] << " " << a1[2] << " " << a1[3] << std::endl ;
   
    std::cout << "\n2-----------------------" << std::endl;

    Array<std::string> a2(3);
    std::cout << "size of a2 : " << a2.size() << std::endl;
    try{
        a2[0] ="safa";
        a2[1]="barka";
        a2[2]="hello";
        a2[30]="000";
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
   
    std::cout << a2[0] << " " << a2[1] << " " << a2[2] << std::endl; 
    for(int i = 0 ; i < a2.size() ; i++){
        std::cout << "len of : " << a2[i] << " is " << a2[i].length()<< std::endl;
    }
    
    std::cout << "\n3-----------------------" << std::endl;

    Array<char> a3(6);
    for(int i = 0 ; i < a3.size() ; i++){
       a3[i] = 'c' + i;
    }
    for(int i = 0 ; i < a3.size() ; i++){
       std::cout << a3[i] << std::endl;
    }

    std::cout << "\n4-----------------------" << std::endl;

    Array<float> a4;
    std::cout << "size of a4 : " << a4.size() << std::endl;

    Array<float> a5(4);
    try{
        a5[0] = 3.01f;
        a5[1] = 2.2f;
        a5[2] = 4.5f;
        a5[3] = 23.6f;
    }catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    a4 = a5;
    for(int i = 0 ; i < a4.size() ; i++){
        std::cout << a4[i] << " ";
    }

    std::cout << "\n5-----------------------" << std::endl;

    Array<int> a6(a1);
    for(int i = 0; i < a6.size() ; i++){
        std::cout << a6[i] << " ";
    }

    std::cout << "\n6-----------------------" << std::endl;
    
    // Array<Awesome> a10(5);

    // for(int i = 0 ; i < a10.size() ; i++){
    //     std::cout << a10[i].get() << " ";
    // }

}