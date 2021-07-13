#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name , int grade) :  _name(name)
{
    this->_grade = grade;
    if (this->_grade  < 1)
        throw GradeTooHightException();
    else  if(this->_grade > 150)
        throw GradeTooLowExceoption();
    
}
Bureaucrat::Bureaucrat( void ){
    //constructor
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name){
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
   if(this->_grade > 150)
        throw GradeTooLowExceoption();
}

Bureaucrat::GradeTooHightException::GradeTooHightException(){
    
}

Bureaucrat::GradeTooLowExceoption::GradeTooLowExceoption(){
    
}

const char * Bureaucrat::GradeTooHightException::what() const throw(){
    return  "Exception : too hight Grade" ;
}

const char * Bureaucrat::GradeTooLowExceoption::what() const throw(){
    return  "Exception : too low Grade" ;
}


std::ostream  & operator << (std::ostream  & o , Bureaucrat  & bureaucrat){
    o  << bureaucrat.getName();
    o << ", bureaucrat grade ";
    o << bureaucrat.getGrade() << std::endl;

    return o;
}