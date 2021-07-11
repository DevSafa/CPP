#ifndef SQUAD_H
# define SQUAD_H
#include "ISquad.hpp"

//Squad implement the interface ISquad
class Squad  : public ISquad{
    private:

        int _count;
        ISpaceMarine **_units;

    public :
       
        Squad( void );      /*canonical */
        ~Squad( void );        /* canonical */
        Squad(Squad const & src);   /* canonical */
        Squad & operator = (Squad const & src); /* canonical */
        int getCount() const ;
        ISpaceMarine* getUnit(int) const ;
        int push(ISpaceMarine*);
};

#endif
