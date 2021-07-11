#ifndef MONSTER_H
# define MONSTER_H
#include "Victim.hpp"
/*
    A Peon is a Victim.
*/
class Monster : public Victim {
    
    public:
        Monster(std::string  const & name);
        Monster(Monster const & src);             /*canonical */
        virtual ~Monster( void );                      /*canonical */
        Monster & operator = (Monster & src);     /*canonical */
        virtual void getPolymorphed( void ) const;
    private:
        Monster( void );                          /*canonical */
};



#endif