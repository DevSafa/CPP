#ifndef VICTIM_H
# define VICTIM_H
#include <iostream>
#include <string>

class Victim {

    public :
        Victim(std::string const & name);       
        virtual ~Victim( void );                    /*canonical*/
        Victim( Victim const & src);                /*canonical*/
        Victim & operator = (Victim const &src);    /*canonical*/
        std::string getName( void ) const;

        virtual void getPolymorphed( void ) const;
    
    private:
        Victim( void );                             /*canonical*/
    protected :
        std::string _name;

};

/*
    overload of << operator
*/
std::ostream & operator << ( std::ostream &o, Victim & victim);

#endif

/* virtual means that the linkage will be dynamic */