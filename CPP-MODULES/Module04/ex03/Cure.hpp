#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
    public :
        Cure( void );               /*canonical */
        Cure(Cure const & src);     /* canonical */
        virtual ~Cure( void );      /* canonical */
        Cure & operator = ( Cure const & src); /* canonical */
        AMateria *clone() const;
        void use(ICharacter & target);
};


#endif