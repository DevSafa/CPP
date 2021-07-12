#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name , int grade) :  _name(name)
{
    this->_grade = grade;
    if (this->_grade  < 1)
        throw GradeTooHightException();
    else  if(this->_grade > 170)
        throw GradeTooLowExceoption();
    
}
Bureaucrat::Bureaucrat( void ){
    //constructor
}

Bureaucrat::Bureaucrat(Bureaucrat const & src){
    *this = src;
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const & src){
    if(this != &src)
    {
        //this->_name = src._name;
        this->_grade = src._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat( void )
{

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
        throw GradeTooHightException();
}   

void Bureaucrat::decrement(){
    this->_grade++;
   if(this->_grade > 170)
        throw GradeTooLowExceoption();
}

Bureaucrat::GradeTooHightException::GradeTooHightException(){
    
}

Bureaucrat::GradeTooLowExceoption::GradeTooLowExceoption(){
    
}

void Bureaucrat::GradeTooHightException::getMessage() const {
    std::cout << "too hight Grade" << std::endl;
}

void Bureaucrat::GradeTooLowExceoption::getMessage() const {
    std::cout << "Too low Grade" << std::endl;
}
