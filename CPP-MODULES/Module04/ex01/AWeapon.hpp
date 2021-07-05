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
        AWeapon(AWeapon const & src);
        AWeapon & operator = (AWeapon const & src);
        ~AWeapon( void );
        virtual void attack( void ) const = 0;

        std::string const  & getName( void ) const;
        int         getAPCost( void ) const;
        int         getDamage( void ) const;
    private:
        AWeapon( void );

};

 std::ostream & operator << (std::ostream & o , AWeapon & aweapon);

#endif