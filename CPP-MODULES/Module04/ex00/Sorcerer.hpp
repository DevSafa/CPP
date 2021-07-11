#ifndef SORCERER_H
# define SORCERER_H
#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer {
    public :            
        Sorcerer(std::string const & name, std::string const & title);
        Sorcerer(Sorcerer const & src);                 /*canonical*/
        ~Sorcerer( void );                              /*canonical*/
        Sorcerer & operator = (Sorcerer const & cpy);   /*canonical*/

        std::string getName( void ) const;
        std::string getTitle( void ) const;

        void polymorph(Victim const &) const ;

    private :
        /*
            The class can’t be instanciated without parameters
        */
        Sorcerer( void );                               /*canonical*/
        /*
            Sorcerer class, which has a name and a title.
        */
        std::string _name;
        std::string _title;
};

/*
    overload of << operator
*/
std::ostream & operator << (std::ostream  & o , Sorcerer &sorcerer) ;

#endif