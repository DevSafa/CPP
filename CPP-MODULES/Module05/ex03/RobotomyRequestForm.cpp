#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
     Form("Robotomy Request",45,72) 

{
   
    this->_target = target;
  //  srand(time(0));
}

RobotomyRequestForm::~RobotomyRequestForm(void){
    std::cout << "destroy Robotomy Request form" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator = (RobotomyRequestForm const  & src){
    if(this != &src)
    {
       // Form::operator = (src);
        this->_target = src._target;
    }
    return *this;
}

std::string RobotomyRequestForm::getTarget( void ) const {
    return  this->_target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const  & src) :
     Form("Robotomy Request",137,45)
{
    *this = src;
}

void RobotomyRequestForm::execute(Bureaucrat  const & executor) const {
    if(!this->getIsSigned())
        throw Form::FormNotSignedEXception();
    if(executor.getGrade() > this->getGradeExecute())
        throw Form::GradeTooLowException();

    std::cout << "drillingggggggggggg noiiiiiiiiiiiiiiiisesss ...." << std::endl;
    // Use current time as seed for random generator
  //  if(rand() % 2 == 0)
        std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
   // else
        std::cout << this->getTarget() << " couldn't be robotomized" << std::endl;
    
}
    