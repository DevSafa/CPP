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
        // delete called on 'AWeapon' that is
        // abstract but has non-virtual destructor error 
        virtual ~AWeapon( void );
        AWeapon(AWeapon const & src);
        AWeapon & operator = (AWeapon const & src);
        

        std::string const  & getName( void ) const;
        int         getAPCost( void ) const;
        int         getDamage( void ) const;
        //'attack' is not virtual and
        //cannot be declared pure
        // must use keyword virtual
        virtual void attack( void ) const = 0;
        
    private:
        AWeapon( void );

};

 std::ostream & operator << (std::ostream & o , AWeapon & aweapon);

#endif