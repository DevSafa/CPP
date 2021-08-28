#include "Form.hpp"


Form::~Form(void){
    //destructor
}

Form::Form(std::string const & name, int const  &gradeExecute , int const  &gradeSignIt) :
_name(name) , _gradeExecute(gradeExecute) ,_gradeSigneIt(gradeSignIt)  , _is_signed(false){

    if(_gradeExecute < 1 || _gradeSigneIt < 1)
    {
       
        throw Form::GradeTooHighException();
    }
    if(_gradeExecute > 150 || _gradeSigneIt > 150 )
        throw Form::GradeTooLowException();

}


Form::Form(Form const & src)  :
_name(src._name) , _is_signed(src._is_signed) , _gradeExecute(src._gradeExecute) , _gradeSigneIt(src._gradeSigneIt)
{
    
   if(_gradeExecute < 1 || _gradeSigneIt < 1)
        throw Form::GradeTooHighException();
   if(_gradeExecute > 150 || _gradeSigneIt > 150 )
        throw Form::GradeTooLowException();
}



std::string const &Form::getName(void) const{
    return this->_name;
}

bool  Form::getIsSigned( void ) const {
    return this->_is_signed;
}

int const & Form::getGradeSignIt( void ) const {
    return this->_gradeSigneIt;
}

int const & Form::getGradeExecute( void ) const {
    return this->_gradeExecute;
}

const char *Form::GradeTooHighException::what() const throw(){
    return  "Form Exception : too hight Grade" ;
}

const char *Form::GradeTooLowException::what() const throw(){
    return  "Form Exception : too low Grade" ;
}

const char *Form::FormAlreadySignedException::what() const throw(){
    return "Form Exception: Form already signed" ;
}
const char *Form::FormNotSignedEXception::what() const throw(){
    return "Form Exception: Form not signed" ;
}
std::ostream & operator << (std::ostream & o , Form   & form){
    o << "form name : " << form.getName() << std::endl;
    if(form.getIsSigned())
        o << "is signed : " << "True" << std::endl;
    else
        o << "is signed : " << "False" << std::endl;
    o << "grade to sign it : " << form.getGradeSignIt() << std::endl;
    o << "grade to execute it : " << form.getGradeExecute() << std::endl;
    return o;
}

void Form::beSigned( Bureaucrat const & bureaucrat)  {
    // check if the form is already signed
    if(this->_is_signed)
        throw Form::FormAlreadySignedException();
    /*
        Always remember, grade 1 is better than
        grade 2. If the grade is too low, throw a Form::GradeTooLowException
    */
    if (bureaucrat.getGrade() > this->getGradeSignIt())
        throw Form::GradeTooLowException(); 
    this->_is_signed = true;
    
}

void Form::checkForm(Bureaucrat const & executor) const 
{
    if(!this->getIsSigned())
        throw Form::FormNotSignedEXception();
    if(executor.getGrade() > this->getGradeExecute())
        throw Form::GradeTooLowException();
    
} 

Form &Form::operator=(Form const &src)
{
	this->_is_signed = src._is_signed;
	return (*this);
}