#include "Bureaucrat.hpp"

int main(){

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

}