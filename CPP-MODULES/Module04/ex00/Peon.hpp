#ifndef PEON_H
# define PEON_H
#include "Victim.hpp"
/*
    A Peon is a Victim.
*/
class Peon : public Victim {
    
    public:
        Peon(std::string  const & name);
        Peon(Peon const & src);             /*canonical */
        virtual ~Peon( void );                      /*canonical */
        Peon & operator = (Peon & src);     /*canonical */
        virtual void getPolymorphed( void ) const;
    private:
        Peon( void );                          /*canonical */
};



#endif