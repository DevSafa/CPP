#include <stdio.h>

int gl_var = 1; //defined in the global scope
int f(void) {return 2;}


namespace Foo {
    int gl_var = 3; //defined in the Foo namespace
    int f(void) {return 4; }
}

namespace Bar {
    int gl_var = 5;
    int f(void) {return 6; }
}

namespace Muf = Bar; //Muf namespace it's just an alias for the Bar namespace
// ::  called the scope resolution operator
int main(void) {
    printf("gl_var:       [%d]\n", gl_var);
    printf("f():          [%d]\n\n", f());

    printf("Foo::gl_var:  [%d]\n", Foo::gl_var);  //Foo::gl_var ; inside the Foo namespace , i wanna access the gl_var variable
    printf("Foo::f():     [%d]\n\n", Foo::f());

    printf("Bar::gl_var:  [%d]\n", Bar::gl_var);
    printf("Bar::f():     [%d]\n\n", Bar::f());

    printf("Muf::gl_var:  [%d]\n", Muf::gl_var); 
    printf("Muf::f():     [%d]\n\n", Muf::f());

    printf("::gl_var:     [%d]\n", ::gl_var); // use syntax empty namespace ; scope resultaion in the global symbol
    printf("::f():        [%d]\n\n", ::f()); //::f()  is the exact the same f().
}

//the scope resolution operator without any namespace refer to the global scope 

// there is one namespace in particular , that you will use a lot ,it's the standard namespace  std:: , in which you can find 
//in the whole standard c++ library
//to compiile  : g++ -Wall -Wextra -Werror namespace.cpp