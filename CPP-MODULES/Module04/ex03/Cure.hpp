#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include <string>

class Cure : public AMAteria {
    public :
        Cure( void );
        Cure(Cure const & src);
        virtual ~Cure( void );
        Cure & operator = ( Cure const & src);
        AMateria *clone() const;
        void use(ICharacter & target);
    private:
        Cure(std::string const & type);
}


#endif