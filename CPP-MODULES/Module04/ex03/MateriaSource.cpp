#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ){
    this->_src = new AMateria*[4];
    for(int i = 0 ; i < 4 ; i++)
        this->_src[i] = NULL;
}

MateriaSource::~MateriaSource( void ){
    for(int i = 0 ; i < 4 ; i++)
        delete this->_src[i];
    delete[] this->_src;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    this->_src = new AMateria *[4];
    for(int i = 0 ; i < 4 ; i++)
        this->_src[i] = NULL;
    *this = src;
}

AMateria *MateriaSource::getMateria(int i ) const {
    return this->_src[i];
}

MateriaSource & MateriaSource::operator = (MateriaSource const & src){
    if(this != &src)
    {
        for(int i = 0 ; i < 4 ; i++)
            delete this->_src[i];
        for(int i = 0; i < 4 ; i++)
           this->_src[i] = src.getMateria(i)->clone();
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m){
    for(int i = 0; i < 4 ; i++)
    {
        if(this->_src[i] == NULL)
        {
            this->_src[i] = m;
            break;
        }
    }
}

AMateria * MateriaSource::createMateria(std::string const &type){
    for(int i = 0; i < 4 ; i++){
        if(this->_src[i]->getType() == type)
            return this->getMateria(i)->clone();
    }
    return 0;
}

