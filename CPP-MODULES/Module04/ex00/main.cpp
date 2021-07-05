#include "Sorcerer.hpp"

int main(){
    // test Sorcerer class

    //Parametric constructor
    Sorcerer sorcer1("s1","ss1");
    std::cout << sorcer1;

    //Parametric constructor
    Sorcerer sorcer2("s2","ss2");
    std::cout << sorcer2;

    //Copy constructor
    Sorcerer sorcer3(sorcer1);
    std::cout << sorcer3;

    // test assignement operator
    Sorcerer sorcer4("a1","aa2");
    std::cout << sorcer4;
    Sorcerer sorcer5("o1","oo2");
    std::cout << sorcer5;


    sorcer5 = sorcer4;

    std::cout << sorcer5;
    
    // test fucntions of Sorcerer class
    sorcer5.birth();
    sorcer5.death();
    sorcer5.introduce();
    std::cout << "---------------------" << std::endl;

}

//std::cout << &sorcer3 << "-" << &sorcer4 << std::endl;

// we can't call default constructor because it's private
        //Sorcerer sorcer2;