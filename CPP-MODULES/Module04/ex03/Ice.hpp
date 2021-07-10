#ifndef ICE_H
# define ICE_H

#include <iostream>
#include <string>
class Ice : public AMAteria {
    public :
        Ice( void );
        Ice(Ice const & src);
        virtual ~Ice( void );
        Ice & operator = ( Ice const & src);
        AMateria *clone() const;
        void use(ICharacter & target);
    private:
        Ice(std::string const & type);
}


#endif