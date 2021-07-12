#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
class Bureaucrat {
    private :
        std:string const _name;
        int _grade;

    public :
        Bureaucrat( void );                 /* canonical */
        Bureaucrat( Bureaucrat const & src); /* canonical */
        Bureaucrat( std::string cont & name , int grade);
        Bureaucrat & operator = (Bureaucrat const & src); /* canonical */
        ~Bureaucrat( void );                               /* canonical */
        std::string const & getName() const;
        int getGrade() const;
        void setGrade(int grade);
        void increment( void );
        void decrement( void );
    
};

std::ostream const & operator << (std::ostream const & o , Bureaucrat const & bureauc)
#endif