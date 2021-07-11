#ifndef AMATERIA_H
# define AMATERIA_H
#include <string>
#include <iostream>

class ICharacter;

class AMateria{
    protected:
        unsigned int _xp;
        std::string _type;
        AMateria( void );                               /* canonical */
    public:
        AMateria(std::string const & type);
        AMateria(AMateria const & src);                 /* canonical */
        virtual ~AMateria();                            /* canonical */
        AMateria & operator = ( AMateria const & src);  /* canonical */
        std::string const & getType() const ; 
        unsigned int getXP() const; 

        virtual AMateria* clone() const = 0;
       virtual void use(ICharacter& target);

};



#endif