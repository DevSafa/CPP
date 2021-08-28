#ifndef SHRUBBERY_CREATION_FORM_H
# define SHRUBBERY_CREATION_FORM_H

#include "Form.hpp"
#include <string>
#include <iostream>

class ShrubberyCreationForm : public Form {

    private :
        std::string _target;
        ShrubberyCreationForm(void); /* canonical */

    public :
        ShrubberyCreationForm(std::string  const &target);
        ~ShrubberyCreationForm(void); /*canonical */
        ShrubberyCreationForm(ShrubberyCreationForm const & src); /*canonical */
        ShrubberyCreationForm & operator = (ShrubberyCreationForm const  & src); /*canonical */
        std::string const & getTarget( void) const;
        void execute(Bureaucrat  const & executor) const ;

        class FileNotCreatedException : public std::exception {
            public :
                virtual const char * what() const throw();
        };
};

// std::ostream & operator << (std::ostream & o , ShrubberyCreationForm const & sf);




#endif