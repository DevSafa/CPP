#include "Bureaucrat.hpp"

int main(){
    try{
        Bureaucrat bureaucrat("b1", 0);
        bureaucrat.decrement();
        

    }catch(Bureaucrat::GradeTooHightException e)
    {
        e.getMessage();
    }catch(Bureaucrat::GradeTooLowExceoption e){
        e.getMessage();
    }
    
}