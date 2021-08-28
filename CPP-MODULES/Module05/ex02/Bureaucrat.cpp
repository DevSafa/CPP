#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name , int grade) :  _name(name) , _grade(grade)
{
    if (this->_grade  < 1)
        throw Bureaucrat::GradeTooHightException();
    else  if(this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    
}
Bureaucrat::Bureaucrat( void ){
    //constructor
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name) , _grade(src._grade){
     if (this->_grade  < 1)
        throw Bureaucrat::GradeTooHightException();
    else  if(this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const & src){
    if(this != &src)
        this->_grade = src._grade;
    return *this;
}

Bureaucrat::~Bureaucrat( void )
{
   // std::cout << "destroy bureaucrat " << std::endl;

}

std::string const & Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::increment() {
    if (this->_grade - 1  < 1)
        throw Bureaucrat::GradeTooHightException();
     this->_grade--;
}   

void Bureaucrat::decrement(){
   if(this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}



const char * Bureaucrat::GradeTooHightException::what() const throw(){
    return  "Bureaucrat Exception : too hight Grade" ;
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return  "Bureaucrat Exception : too low Grade" ;
}

/*
    add a beSigned function that takes a Bureaucrat, and makes the form
    signed if the bureaucrat’s grade is high enough
*/
void Bureaucrat::signForm(Form & form) const {
    if(form.getIsSigned())
    {
       std::cout << *this << "cannot sign \n" << form 
       << "because" << " it already signed" << std::endl;
    }
    else if(this->_grade > form.getGradeSignIt())
    {
         std::cout << *this << "cannot sign \n" << form 
       << "because" << " the grade is too low" << std::endl;
    }
    else
    {
        std::cout << *this << "signs \n" << form ;
    }
    form.beSigned(*this);
        
}
/*
    Finish this by adding an executeForm(Form const & form) function to the bureaucrat. It must attempt to execute the form, and if it’s a success, print something like
    <bureaucrat> executes <form>. If not, print an explicit error message.
*/
void Bureaucrat::executeForm(Form const & form) {
    if(this->_grade > form.getGradeExecute())
        std::cout << *this << "cannot execute  " << form.getName() << " because the grade is too low " <<  std::endl;
    if(!form.getIsSigned())
        std::cout << *this << "cannot execute  " << form.getName() << " because the form is not signed" <<  std::endl;
    form.execute(*this);
    std::cout << *this << "executes " << form.getName() << std::endl;
}
std::ostream  & operator << (std::ostream  & o , Bureaucrat  const & bureaucrat){
    o  << bureaucrat.getName();
    o << ", bureaucrat grade ";
    o << bureaucrat.getGrade() << std::endl;

    return o;
}