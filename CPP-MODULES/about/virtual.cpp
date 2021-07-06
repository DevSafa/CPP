#include <iostream>
using namespace std;

struct A {
    void f() {
        cout << "Class A " << endl;
    }
};

struct B: A {
    void f() {
        cout << "Class B" << endl;
    }
};

void g(A & arg){
    arg.f();
}

//----------------------------------

struct C {
    virtual void f() {
        cout << "Class C " << endl;
    }
};

struct D: C {
    void f() {
        cout << "Class D" << endl;
    }
};

void g(C & arg){
    arg.f();
}

int main() {
    B x;
    //When function g() is called, function A::f() is called
    //although the argument refers to an object of type B
    //At compile time, the compiler knows only that the argument of 
    //function g() will be a reference to an object derived from A;
    //it cannot determine whether the argument will be a reference to an object of type A 
    //or type B.
    //However, this can be determined at runtime
    g(x);

    std::cout << "------------------\n";

    D y;
    
    g(y);
}