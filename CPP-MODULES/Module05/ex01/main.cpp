
#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(){
    
    
    std::cout << "1=========" << std::endl;
    try {
        Bureaucrat bureaucrat1("b1", 150);
        std::cout << bureaucrat1;
        bureaucrat1.decrement();
        std::cout << bureaucrat1;
    }catch(std::exception & e)
    {
        std::cout <<  e.what() << std::endl;
    }

    std::cout << "2=========" << std::endl;
    try {
         Bureaucrat bureaucrat1("b1",1);
        std::cout << bureaucrat1;
        bureaucrat1.decrement();
        std::cout << bureaucrat1;
        bureaucrat1.increment();
        bureaucrat1.increment();
    }catch(std::exception & e)
    {
       std::cout <<  e.what() << std::endl;
    }

   
    std::cout << "3=========" << std::endl;
    try {
        Form form1("f1", 15, 13);
        std::cout << form1;
    }catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "4=========" << std::endl;
    try {
        Form form1("f1", 151, 3);
        std::cout << form1;
    }catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }

    std::cout << "5=========" << std::endl;
    try {
        Form form1("f1", 150, 0);
        std::cout << form1;
    }catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }

    std::cout << "6=========" << std::endl;
    try {
        Bureaucrat bureaucrat("b",10);
        Form form("f" , 2 , 30);
        std::cout << bureaucrat;
        std::cout << "-------" << std::endl;
        std::cout << form;
        std::cout << "-------" << std::endl;  
        form.beSigned(bureaucrat);
        std::cout << "-------" << std::endl; 
    }catch(std::exception & e )
    {
        std::cout << e.what() << std::endl;
    }


    std::cout << "7=========" << std::endl;
    try {
        Bureaucrat bureaucrat("b",10);
        Form form("f" , 150 , 4);
        std::cout << bureaucrat;
        std::cout << "-------" << std::endl;
        std::cout << form;
        std::cout << "-------" << std::endl;  
        form.beSigned(bureaucrat);
        std::cout << "-------" << std::endl; 
    }catch(std::exception & e )
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "8=========" << std::endl;
    try {
        Bureaucrat bureaucrat("b",10);
        Form form("f" , 150 , 13);
        form.beSigned(bureaucrat);
        std::cout << "-------" << std::endl; 
        Bureaucrat bureaucrat1("b1",5);
        form.beSigned(bureaucrat1);
        std::cout << "-------" << std::endl; 
    }catch(std::exception & e )
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "9=========" << std::endl;
    try {
        Bureaucrat bureaucrat("b",10);
        Form form("f" , 150 , 13);
        bureaucrat.signForm(form);
        Bureaucrat bureaucrat1("b1",11);
        bureaucrat1.signForm(form);
    }catch(std::exception & e )
    {
        std::cout << e.what() << std::endl;
    }


    std::cout << "10=========" << std::endl;
    try {
        Bureaucrat bureaucrat("b",40);
        Form form("f" , 150 , 13);
        bureaucrat.signForm(form);
    }catch(std::exception & e )
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "10=========" << std::endl;
    try {
        Bureaucrat bureaucrat("b",40);
        Form form("f" , 150 , 100);
        bureaucrat.signForm(form);
    }catch(std::exception & e )
    {
        std::cout << e.what() << std::endl;
    }
}
