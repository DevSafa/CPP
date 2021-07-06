#ifndef VICTIM_H
# define VICTIM_H

#include <iostream>
#include <string>

#define BOLDGREEN   "\033[1m\033[32m" 
#define BOLDRED     "\033[1m\033[31m"
#define BOLDYELLOW  "\033[1m\033[33m"

class Victim {

    public :
        Victim(std::string name);
        virtual  ~Victim( void );
        Victim( Victim const & src);
        Victim & operator = (Victim const &src);
        
        std::string getName( void ) const;

        virtual void getPolymorphed( void ) const;
        
    protected :
        Victim( void );
        std::string _name;

};

std::ostream & operator << ( std::ostream &o, Victim & victim);

#endif