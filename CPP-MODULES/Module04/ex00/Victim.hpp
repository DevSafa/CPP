#ifndef VICTIM_H
# define VICTIM_H
#include <iostream>
#include <string>

class Victim {

    public :
        Victim(std::string const & name);
        virtual ~Victim( void );
        Victim( Victim const & src);
        Victim & operator = (Victim const &src);
        std::string getName( void ) const;
        virtual void getPolymorphed( void ) const;
    
    private:
        Victim( void );
    protected :
        std::string _name;

};

std::ostream & operator << ( std::ostream &o, Victim & victim);

#endif