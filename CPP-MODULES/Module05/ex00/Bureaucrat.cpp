#include "Bureaucrat.hpp"

/*
Any attempt to create a Bureaucrat with an invalid grade must
throw an exception
*/
Bureaucrat::Bureaucrat(std::string const & name , int grade) : _name(name) , _grade(grade){

    if (this->_grade  < 1)
        throw   Bureaucrat::GradeTooHightException();
    else  if(this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
        
    
}

/*
Any attempt to create a Bureaucrat with an invalid grade must
throw an exception
*/
Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name) , _grade(src._grade){
     if (this->_grade  < 1)
        throw   Bureaucrat::GradeTooHightException();
    else  if(this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const & src) {
    if(this != &src)
        this->_grade = src._grade;
    return *this;
}

Bureaucrat::~Bureaucrat( void )
{

}

std::string const & Bureaucrat::getName( void ) const {
    return this->_name;
}

int Bureaucrat::getGrade( void ) const {
    return this->_grade;
}

/*
    and two functions to increment or decrement the grade
    Both these functions will throw the same
    exceptions as before if the grade gets too high or too low
*/

/* grade 1 is highest  , 150 is lowest , incrementing a grade 3 gives you a grade 2 */
void Bureaucrat::increment( void ) {
    
    if (this->_grade - 1  < 1)
        throw GradeTooHightException();
    this->_grade--;
}   

void Bureaucrat::decrement( void ){
   
   if(this->_grade + 1 > 150)
        throw GradeTooLowException();
     this->_grade++;
}


/*
which will be either a Bureaucrat::GradeTooHighException or a
Bureaucrat::GradeTooLowException
*/

const char * Bureaucrat::GradeTooHightException::what() const throw(){
    return  "Bureaucrat Grade Exception : too hight Grade" ;
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return  "Bureaucrat Grade Exception : too low Grade" ;
}

/*
    You will provide an overload of the<<operator toostreamthat outputs something like
    <name>, bureaucrat grade <grade>
*/
std::ostream  & operator << (std::ostream  & o , Bureaucrat  const  & bureaucrat){
    o  << bureaucrat.getName();
    o << ", bureaucrat grade ";
    o << bureaucrat.getGrade() << std::endl;

    return o;
}

