#ifndef AMATERIA_H
# define AMATERIA_H
#include <string>

class AMateria{
    protected:
        unsigned int _xp;
        std::string _type;
    public:
        AMateria(std::string const & type);
        AMateria(AMateria const & src);
        virtual ~AMateria();
        AMateria & operator = ( AMAteria const & src);
        std::string const & getType() const ; 
        unsigned int getXP() const; 

        virtual AMAteria* clone() const = 0;
        virtual void use(ICharacter& target);
    private:
        AMAteria( void );
}


#endif