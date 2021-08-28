#ifndef INTERN_H
# define INTERN_H

#include <string>
#include <iostream>
#include "form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern;

typedef struct s_forms {
    Form *(Intern::*p)(std::string & );
    std::string name;
}               t_forms;

class Intern {
    private :
 
        t_forms forms[3];
        Intern( Intern const & src); /* canonical */
        Intern & operator = (Intern const & src); /* canonical */
    public :
        Intern( void );                 /* canonical */
        ~Intern( void );                               /* canonical */
        Form * makeForm(std::string name, std::string   targetForm);
        Form *shrubbery(std::string & target);
        Form *robotomly(std::string & target);
        Form *presidential(std::string & target);


    
};


#endif