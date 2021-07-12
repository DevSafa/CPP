#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
class Bureaucrat {
    private :
        /*
            It must have a constant name, and a grade, that ranges from 1 
            (highest possible) to 150 (lowest possible)
        */
        std::string const _name;
        int _grade;

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
            Any attempt to create a Bureaucrat with an invalid grade must throw 
            an exception,
            which will be either a Bureaucrat::GradeTooHighException or
            a Bureaucrat::GradeTooLowException.
        */
        class GradeTooHightException {
           public :
               GradeTooHightException();
               void getMessage()const ;
        };

        class GradeTooLowExceoption {
            public :
               GradeTooLowExceoption();
               void  getMessage() const ;
        };
    private :
        Bureaucrat( void );                 /* canonical */

    
};

//std::ostream const & operator << (std::ostream const & o , Bureaucrat const & bureauc)
#endif