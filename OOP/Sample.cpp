#include "Sample.class.hpp"

int main(){

    //this simple line ill have two effects
    //it will give a variable of Sample type , a clas instance
    //the code in the constructor will be run 
    Sample instance; // create an instance of my class Sample

    //when i'm done executing my function all the local variables are destroyed , especially
    //my instance variable, at this moment the code of destructor is run .

    //c++ call the constructor in instanciation , and destructor during the destruction
    return 0;
}

//to compile : g++ -Wall -Wextra -Werror Sample.cpp Sample.class.cpp 

//in .h or .hpp we will able to declare the class and the functions and attributes that contains
//in .cpp we will able to define this fuctions present in the class