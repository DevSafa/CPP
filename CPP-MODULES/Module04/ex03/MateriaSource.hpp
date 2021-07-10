#ifndef MATERIA_SOURCE_H
# define MATERIA_SOURCE_H


#include "AMateria.hpp"
#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource{ 
     
        private :
            AMateria **_src;
       public :
            MateriaSource( void );
            ~MateriaSource( void );
            MateriaSource(MateriaSource const & src);
            MateriaSource & operator = ( MateriaSource const & src);
            void learnMateria(AMateria *);
           AMateria *getMateria(int i) const ;
            AMateria* createMateria(std::string const & type);
};



# endif