#ifndef MATERIA_SOURCE_H
# define MATERIA_SOURCE_H

class MateriaSource : public IMateriaSource {
        private :
            AMateria **src;
        public :
            MateriaSource( void );
            ~MateriaSource( void );
            MateriaSource(MateriaSource const & src);
            MateriaSource & operator = ( MateriaSource const & src);
            void learnMateria(AMAteria *);
            AMAteria* createMateria(std::string const & type);
}



# endif