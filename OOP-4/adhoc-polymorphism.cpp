// adhoc-polymorphism is reffered as function overloading
//function-overloading is just a c++ principal
// that allow you many functions that has the same name but accepting different parameters.
// c++ allow you to have this behaviour
#include "Sample.class.hpp"

int main()
{
    Sample sample;
    sample.bar('a');
    sample.bar(42);
    sample.bar(3.14f);
     sample.bar(sample);
}