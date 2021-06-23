#include <iostream>

int main(void)
{
    char buff[512];

    //cout is an object from the standard namespace
    //use the  backarrow << operator that a llow us to redirect the flow to the standard output 

    // Hello wolrd string is the data that i'm redirect to standard output 
    // then i'm going to redirect again smtgh to the standard output , it's a new object from the standard namespace.
    //endl correspond to the carriage return 
    //=> inject the hello wolrd string followed by carriage return 
    std::cout << "Hello wolrd !" << std::endl;

    std::cout << "Input a word: ";
    //using a particular object called cin
    // the operator >> allow me to fetch data from the standard input and redirect data to the buff variable 
    std::cin >> buff;

    std::cout << "You entered: [" << buff << "]" << std::endl;

    // this syntax it's much more praticla than using read bracket and write bracket

    return 0;
}