#ifndef CLAPTRAP_H
# define CLAPTRAP_H
#include <string>
#include <iostream>


class ClapTrap {
    protected :
        std::string _name;
        int _hit_points;
        int _energy_points;
        int _attack_damage;

    public:
        ClapTrap( void );                               /* canonical */
        ClapTrap(std::string name);     
        ClapTrap(ClapTrap const & src );                /* canonical */
        virtual ~ClapTrap( void );                              /* canonical */
        ClapTrap(int  hitPoints , int  energyPoints , int  attackDamage);
        ClapTrap(std::string  name , int  hitPoints , int  energyPoints , int  attackDamage);

        ClapTrap & operator = (ClapTrap const & cpy);   /* canonical */
        virtual void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired( unsigned int amount);
    
        //getters
        std::string getName( void ) const;
        int         getHitPoints( void ) const;
        int         getEnergyPoints( void ) const;
        int         getAttackDamage( void ) const;

        //setters
        void         setName( std::string const & name );
        void         setHitPoints( int & hitPoints );
        void         setEnergyPoints( int & energyPoints );
        void         setAttackDamage( int & attackDamage );

};

std::ostream &operator << (std::ostream & o , ClapTrap &clapTrap);
#endif