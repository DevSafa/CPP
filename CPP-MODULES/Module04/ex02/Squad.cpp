#include "Squad.hpp"

Squad::Squad( void ){
    this->_count = 0;
    this->_units = NULL;
}

/*
    When a Squad is destroyed, the units inside are destroyed also, in order.
*/
Squad::~Squad( void ){
    if(this->_units != NULL)
    {
        for(int i = 0 ; i < this->_count ; i++)
            delete this->_units[i];
        delete[] this->_units;
    }
}

/*
    Upon copy construction or assignation of a Squad , the copy must be deep.
*/
Squad::Squad(Squad const & src)
{
   this->_count = 0;
    this->_units = NULL;
    *this = src ;
}

/*
    getCount() returns the number of units currently in the squad.
*/
int Squad::getCount() const {
    return this->_count;
}

/*
    getUnit(N) returns a pointer to the Nth unit (Of course, we start at 0. 
    Null pointer in case of out-of-bounds index.)
*/
ISpaceMarine *Squad::getUnit(int i) const {

   if(i >= 0 && i < this->getCount())
        return this->_units[i];
   return NULL;
}

/*
    Upon assignation, if there was any unit in the Squad before, they must be destroyed 
    before being replaced
*/
Squad & Squad::operator = ( Squad const & src){
    if (this == &src)
        return *this;
    ISpaceMarine **new_array = new ISpaceMarine*[src.getCount()];
    for (int i = 0 ; i < src.getCount() ; i++)
       new_array[i] = src.getUnit(i)->clone();

    for(int i = 0 ; i < this->getCount() ; i++)
    {
       delete this->_units[i];
    }
    delete[] this->_units;
    this->_count = src.getCount();
    this->_units = new_array;
    return *this;
}

/*
    push(XXX) adds the XXX unit to the end of the squad. Returns the number of units in 
    the squad after the operation .
    Adding a null unit, or an unit already in the squad, make no sense at all, 
    of course...

*/
int Squad::push(ISpaceMarine* unit)
{
    ISpaceMarine ** new_array;
    new_array = NULL;
    int i ;
    if(unit == NULL)
        return this->_count;
    for(i = 0; i < this->_count ; i++)
    {
        if(this->_units[i] == unit)
            return this->_count;
    }
    if(this->_units == NULL)
    {
        new_array = new ISpaceMarine*[1];
        new_array[0] = unit;
    }
    else if (this->_units != NULL)
    {
        new_array = new ISpaceMarine*[this->_count + 1];
        for(i = 0 ; i < this->_count ; i++)
            new_array[i] = this->_units[i];
        new_array[i] = unit;

    }
    delete[] this->_units;
    this->_units = new_array;
    this->_count++;
    return this->_count;
}

