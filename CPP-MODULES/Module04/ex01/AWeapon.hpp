#ifndef AWEAPON_H
# define AWEAPON_H
#include <iostream>
#include <string>

class AWeapon {
    
    protected:
        std::string  _name;
        int _damage;
        int _apcost;

    public:
        AWeapon(std::string const &name, int apcost, int damage);
        virtual ~AWeapon( void );                       /* canonical */
        AWeapon(AWeapon const & src);                   /* canonical */
        AWeapon & operator = (AWeapon const & src);     /* canonical */
        std::string const  & getName( void ) const;
        int         getAPCost( void ) const;
        int         getDamage( void ) const;
        /*
            A weapon produces certain sounds and lighting effects when 
            you attack() with it. This will be deferred to 
            the inheriting classes
        */
        virtual void attack( void ) const = 0;
        
    private:
        AWeapon( void );                                /*canonical*/

};

//overload of << operator
std::ostream & operator << (std::ostream & o , AWeapon & aweapon);

#endif