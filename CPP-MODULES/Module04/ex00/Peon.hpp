#ifndef PEON_H
# define PEON_H
#include "Victim.hpp"

class Peon : public Victim {
    public:
        Peon(std::string name);
        Peon(Peon const & src);
        ~Peon( void );
        Peon & operator = (Peon & src);
        virtual void getPolymorphed( void ) const;
    private:
        Peon( void );
};


// virtual means that the linkage will be dynamic
#endif