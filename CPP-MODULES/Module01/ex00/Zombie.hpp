#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <string>
#include <iostream>

class Zombie {

    public:
        Zombie( void );
        Zombie( std::string name );   
        ~Zombie( void );
        //announce( void ) is a member function
        void announce( void) const;
        std::string getName( void ) const ;
        void  setName(std::string name);
    private:
        //The zombies have a private name
        std::string _name;

    
};
/* write a function that will create a Zombie, name it, and return iit */
Zombie* newZombie( std::string name);

/* function that will create a Zombie, and make it announce itself */
void randomChump( std::string name);

#endif