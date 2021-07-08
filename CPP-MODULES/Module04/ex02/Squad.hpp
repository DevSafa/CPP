#ifndef SQUAD_H
# define SQUAD_H
#include "ISquad.hpp"

class Squad  : public ISquad{
    private:

        int _count;
        

    public :
        ISpaceMarine **_units;
        Squad( void );
        ~Squad( void );
        Squad(Squad const & src);
       // Squad & opeartor = (Squad const & src);
        int getCount() const ;
        ISpaceMarine* getUnit(int) const ;
        int push(ISpaceMarine*);
};

#endif
