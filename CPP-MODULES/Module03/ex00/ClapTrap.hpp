#ifndef CLAPTRAP_H
# define CLAPTRAP_H
#include <string>
#include <iostream>

#define BOLDGREEN   "\033[1m\033[32m" 
#define BOLDRED     "\033[1m\033[31m"
#define BOLDYELLOW  "\033[1m\033[33m"

class ClapTrap {
    private :
        std::string _name;
        int _hit_points;
        int _energy_points;
        int _attack_damage;

    public:
        ClapTrap( void );
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & src );
        ~ClapTrap( void );

        ClapTrap & operator = (ClapTrap const & cpy);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired( unsigned int amount);
        // getters
        std::string getName( void ) const;
        int         getHitPoints( void ) const;
        int         getEnergyPoints( void ) const;
        int         getAttackDamage( void ) const;

};

std::ostream &operator << (std::ostream & o , ClapTrap &clapTrap);
#endif