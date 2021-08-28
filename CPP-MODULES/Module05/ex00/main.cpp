#include "Bureaucrat.hpp"

int main(){
    //test increment and decrement functions
    std::cout << "1=========" << std::endl;
    try
    {
        Bureaucrat bureaucrat("b1", 50);
        std::cout << bureaucrat;
    }
    catch(std::exception &e)
    {
       std::cout <<  e.what() << std::endl;
    }

    std::cout << "2=========" << std::endl;

    try
    {
        Bureaucrat bureaucrat("b1", 1);
        std::cout << bureaucrat;
        bureaucrat.increment();
        std::cout << bureaucrat ;
    } 
    catch(std::exception &e)
    {
       std::cout <<  e.what() << std::endl;
    }

    std::cout << "3=========" << std::endl;

    try
    {
        Bureaucrat bureaucrat("b1", 150);
        std::cout << bureaucrat;
        bureaucrat.increment();
        std::cout << bureaucrat;
    } 
    catch(std::exception &e)
    {
       std::cout <<  e.what() << std::endl;
    }

    std::cout << "4=========" << std::endl;

    try
    {
        Bureaucrat bureaucrat("b1", 150);
        std::cout << bureaucrat;
        bureaucrat.decrement();
        std::cout << bureaucrat;
    } 
    catch(std::exception &e)
    {
       std::cout <<  e.what() << std::endl;
    }

    std::cout << "5=========" << std::endl;

    try
    {
        Bureaucrat bureaucrat("b1", 150);
        bureaucrat.increment();
        std::cout << bureaucrat;


        bureaucrat.increment();
        std::cout << bureaucrat;


        bureaucrat.decrement();
        std::cout << bureaucrat;

        bureaucrat.decrement();
        std::cout << bureaucrat;

        bureaucrat.decrement();
        std::cout << bureaucrat;
    } 
    catch(std::exception &e)
    {
       std::cout <<  e.what() << std::endl;
    }

    //test constructors
    std::cout << "6=========" << std::endl;

    try
    {
        Bureaucrat bureaucrat("b1", 151);
        std::cout << bureaucrat;
       
    } 
    catch(std::exception &e)
    {
       std::cout <<  e.what() << std::endl;
    }

    std::cout << "7=========" << std::endl;

    try
    {
        Bureaucrat bureaucrat("b1", 0);
        std::cout << bureaucrat;
       
    } 
    catch(std::exception &e)
    {
       std::cout <<  e.what() << std::endl;
    }

    //test copy constructor
    std::cout << "8=========" << std::endl;
    Bureaucrat bureaucrat("b",150);
    try {
        bureaucrat.decrement();
    }catch(std::exception &e)
    {
         std::cout <<  e.what() << std::endl;
    }
    std::cout << "9=========" << std::endl;
    
    try {

        Bureaucrat bureaucrat1 = bureaucrat;
        std::cout << bureaucrat1;
    
    }catch(std::exception &e)
    {
          std::cout <<  e.what() << std::endl;
    }
   
}