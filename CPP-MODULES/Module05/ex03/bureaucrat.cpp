#include "bureaucrat.hpp"

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
    std::cout << "destroy bureaucrat " << std::endl;

}

std::string const & Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::increment() {
    this->_grade--;
    if (this->_grade  < 1)
        throw Bureaucrat::GradeTooHightException();
}   

void Bureaucrat::decrement(){
    this->_grade++;
   if(this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
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
        std::cout << this->_name << " cannot signs " << form.getName() << std::endl; 
        std::cout << "the form already signed" << std::endl;
    }
    // if(form.getIsSigned())
    //     throw Form::FormAlreadySignedException();
    else if(this->_grade > form.getGradeSignIt())
    {
        std::cout << this->_name << " cannot signs " << form.getName() << std::endl; 
    //     throw Form::GradeTooLowException();
        std::cout << "the grade is too low" << std::endl;
    }
    else
    {
         std::cout << this->_name << " signs " << form.getName() << std::endl;
    }
    form.beSigned(*this);
    // std::cout << this->_name << " signs " << form.getName() << std::endl;
        
}

void Bureaucrat::executeForm(Form const & form) {
    form.execute(*this);
}
std::ostream  & operator << (std::ostream  & o , Bureaucrat  const & bureaucrat){
    o  << bureaucrat.getName();
    o << ", bureaucrat grade ";
    o << bureaucrat.getGrade() << std::endl;

    return o;
}