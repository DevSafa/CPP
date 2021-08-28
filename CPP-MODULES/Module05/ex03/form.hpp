#ifndef FORM_H
# define FORM_H
#include <string>
#include <iostream>

class Form;
#include "bureaucrat.hpp"

class Form {
    private :
        /*
            Make a Form class. It has a name
        */
        std::string const _name;
        /*  a boolean indicating whether it is signed (at
                the beginning, it’s not)  
        */ 
        bool  _is_signed;
        /* a grade required to sign it */ 
        int const  _gradeSigneIt;
        /* a grade required to execute it */
        int const  _gradeExecute;
        Form( void );           /*canonical*/
      

    public :
        virtual ~Form( void ) ;         /*canonical*/
        Form(Form const & form);    /*canonical */
        Form(std::string const & name , int const & gradeExecute, int const & gradeSignIt);
        

        /* make getters for all attributes */
        std::string const &getName(void) const ;
        bool getIsSigned(void)  const;
        int const & getGradeSignIt(void) const;
        int const & getGradeExecute(void) const ;
        Form & operator = (Form const & src); /*canonical */

        /*
            add a beSigned function that takes a Bureaucrat, and makes the form
            signed if the bureaucrat’s grade is high enough
        */
        void beSigned( Bureaucrat const  &bureaucrat ) ;


        /*
            The grades are subject to the same constraints as in 
            the Bureaucrat, and exceptions will be thrown if any of them 
            are out of bounds.  
        */
        class GradeTooHighException : public std::exception {
            public :
                virtual const char * what() const throw();
        };

        /*
            Always remember, grade 1 is better than
            grade 2. If the grade is too low, throw a Form::GradeTooLowException
        */
        class GradeTooLowException : public std::exception {
            public :
                virtual const char * what() const throw();
        };

        /*exception for already signed form */

        class FormAlreadySignedException : public std::exception {
            public :
                virtual const char * what() const throw();
        };

        class FormNotSignedEXception : public std::exception {
            public :
                virtual const char * what() const throw();
        };
        virtual void execute(Bureaucrat const & executor) const = 0;

};
/*
    an overload of the << operator
    to ostream that completely describes the state of the form.
*/
std::ostream & operator << (std::ostream & o , Form  & form);
#endif