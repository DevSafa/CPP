

#ifndef PRESEDENTIAL_PARDON_FORM_H
# define PRESEDENTIAL_PARDON_FORM_H

#include "Form.hpp"
#include <string>
#include <iostream>

class PresidentialPardonForm : public Form {

    private :
        std::string _target;
        PresidentialPardonForm(void); /* canonical */

    public :
       PresidentialPardonForm(std::string  const & target);
        ~PresidentialPardonForm(void); /*canonical */
        PresidentialPardonForm(PresidentialPardonForm const & src); /*canonical */
        PresidentialPardonForm & operator = (PresidentialPardonForm const  & src); /*canonical */
        std::string const & getTarget( void) const;
        void execute(Bureaucrat  const & executor) const ;

};




#endif