#ifndef WEAPON_H
# define WEAPON_H
#include <string>
#include <iostream>

class Weapon {

    public :
        Weapon( std::string  type );
        ~Weapon( void );
        Weapon( void );
        /*  getType method that returns a const reference to type string  */
        std::string const &  getType( void ) const;
        /*  It also has a setType */
        void setType( std::string const  & type);
        
    private:
        /* has a type string */
        std::string  _type;
        
};

#endif