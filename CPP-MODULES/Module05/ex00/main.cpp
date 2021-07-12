#include "Bureaucrat.hpp"

int main(){

    try{
        Bureaucrat bureaucrat("b1", 1);

        std::cout << bureaucrat;

        std::cout << "========" << std::endl;

        bureaucrat.increment();
        

    }catch(Bureaucrat::GradeTooHightException e)
    {
        e.getMessage();

        
    }catch(Bureaucrat::GradeTooLowExceoption e){
        e.getMessage();
       
    }
    
}