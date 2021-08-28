#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>

class Bureaucrat;
#include "Form.hpp"

class Bureaucrat {
    private :
        /*
            It must have a constant name, and a grade, that ranges from 1 
            (highest possible) to 150 (lowest possible)
        */
        std::string const _name;
        int _grade;
        Bureaucrat( void );                 /* canonical */

    public :
        Bureaucrat( Bureaucrat const & src); /* canonical */
        Bureaucrat( std::string const & name , int grade);
        Bureaucrat & operator = (Bureaucrat const & src); /* canonical */
        ~Bureaucrat( void );                               /* canonical */
        std::string const & getName() const;
        int getGrade() const;
        void increment( void );
        void decrement( void );

        /*
            signForm function to the Bureaucrat. If the signing is successful, it will
            print something like "<bureaucrat> signs <form>", otherwise it will print something
            like "<bureaucrat> cannot sign <form> because <reason>".
        */
        void signForm(Form &form) const ;
        /*
            Any attempt to create a Bureaucrat with an invalid grade must throw 
            an exception,
            which will be either a Bureaucrat::GradeTooHighException or
            a Bureaucrat::GradeTooLowException.
        */
        class GradeTooHightException : public std::exception{
           public :
               virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception{
            public :
               virtual const char *what() const throw();
        };

        void executeForm(Form const & form) ; 
 

    
};

std::ostream & operator << (std::ostream  & o , Bureaucrat  const  & bureaucrat);
#endif