#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
     Form("Presidential Pardon",5, 25) 

{
   
    this->_target = target;

}

PresidentialPardonForm::~PresidentialPardonForm(void){
    std::cout << "destroy Presidential Pardon form" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator = (PresidentialPardonForm const  & src){
    if(this != &src)
    {
       // Form::operator = (src);
        this->_target = src._target;
    }
    return *this;
}

std::string PresidentialPardonForm::getTarget( void ) const {
    return  this->_target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const  & src) :
     Form("Presidential Pardon",137,45)
{
    *this = src;
}

void PresidentialPardonForm::execute(Bureaucrat  const & executor) const {
    if(!this->getIsSigned())
        throw Form::FormNotSignedEXception();
    if(executor.getGrade() > this->getGradeExecute())
        throw Form::GradeTooLowException();

    std::cout << this->getTarget() <<" has been pardoned by Zafod Beeblebrox" << std::endl;
    
    
}
    