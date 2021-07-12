#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name , int grade)
{
    this->_name = name;
    this->grade = grade
}
Bureaucrat::Bureaucrat( void ){
    //constructor
}

Bureaucrat::Bureaucrat(Bureaucrat const & src){
    *this = src;
}

Bureaucrat & Bureaucrat::opeartor = (Bureaucrat const & src){
    if(this != & src)
    {
        this->_name = src._name;
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

void Bureaucrat::setGrade(int grade) const {
    this->_grade = grade;
}

void Bureaucrat::increment() const {
    this->_grade++;
}   

void Bureaucrat::decrement() const {
    this->_grade--;
}
