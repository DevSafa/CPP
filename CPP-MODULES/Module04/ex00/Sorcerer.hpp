#ifndef SORCERER_H
# define SORCERER_H
#include <iostream>
#include <string>

#define BOLDGREEN   "\033[1m\033[32m" 
#define BOLDRED     "\033[1m\033[31m"
#define BOLDYELLOW  "\033[1m\033[33m"

class Sorcerer {
    public :
        Sorcerer(Sorcerer const & src);                 //canonical
        Sorcerer(std::string name, std::string title);
        ~Sorcerer( void );
        Sorcerer & operator = (Sorcerer const & cpy);   //canonical

        //getetrs
        std::string getName( void ) const;
        std::string getTitle( void ) const;

        void birth( void ) const;
        void death( void ) const;
        void introduce( void ) const;

    private :
        Sorcerer( void );                               //canonical
        std::string _name;
        std::string _title;
};

std::ostream & operator << (std::ostream  & o , Sorcerer sorcerer) ;
#endif