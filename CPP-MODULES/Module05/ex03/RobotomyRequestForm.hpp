#ifndef ROBOTOMY_REQUEST_FORM_H
# define ROBOTOMY_REQUEST_FORM_H

#include "form.hpp"
#include <string>
#include <iostream>
//#include <ctime>
class RobotomyRequestForm : public Form {

    private :
        std::string _target;
        RobotomyRequestForm(void); /* canonical */

    public :
       RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm(void); /*canonical */
        RobotomyRequestForm(RobotomyRequestForm const & src); /*canonical */
        RobotomyRequestForm & operator = (RobotomyRequestForm const  & src); /*canonical */
        std::string getTarget( void) const;
        void execute(Bureaucrat  const & executor) const ;

};




#endif