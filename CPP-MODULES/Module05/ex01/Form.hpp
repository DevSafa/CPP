#ifndef FORM_H
# define FORM_H
#include <string>
#include <iostream>
#include "bureaucrat.hpp"
class Form {
    private :
        std::string const  _name;
        bool  _is_signed;
        int  _gradeSigneIt;
        int  _gradeExecute;
        Form( void );           /*canonical*/

    public :
        ~Form( void ) ;         /*canonical*/
        Form(Form const & form);    /*canonical */
        Form(std::string const & name , int const &gradeExecute, int const &gradeSignIt);
        Form & operator = (Form const & src); /*canonical */

        std::string const &getName(void) const ;
        bool & getIsSigned(void) ;
        int const & getGradeSignIt(void) const;
        int const & getGradeExecute(void) const ;
        void beSigned( void ) ;

        class GradeTooHighException : public std::exception {
            public :
                virtual const char * what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public :
                virtual const char * what() const throw();
        };

};

std::ostream & operator << (std::ostream & o , Form const & form);
#endif

