#include "Squad.hpp"

Squad::Squad( void ){
    this->_count = 0;
    this->_units = NULL;
}

Squad::~Squad( void ){

}

Squad::Squad(Squad const & src){
    *this = src;
}

int Squad::getCount() const {
    return this->_count;
}

ISpaceMarine *Squad::getUnit(int i) const {
    
    if(i >= 0 && i <= this->getCount())
    {
        
  
       //this->_units[0]->battleCry();
        return this->_units[i];
    }
    return NULL;
}

int Squad::push(ISpaceMarine* unit)
{
    int i = 0;
    if(unit == NULL)
        return this->_count;
    if(this->_units == NULL)
    {
        ISpaceMarine *new_array[1];
        new_array[0] = unit;
        this->_units = new_array;
        i = 1;
    }
    else if (this->_units != NULL)
    {
       
        while (i < this->_count)
        {
            if(this->_units[i] == unit)
                return this->_count;
            i++;
        }
        ISpaceMarine *new_array[this->_count + 1];
        i = 0;
        while(i < this->_count)
        {
             new_array[i] = this->_units[i];
             new_array[i]->battleCry();
             i++;
        }
        new_array[i] = unit;
        new_array[i]->battleCry();
        this->_units = new_array;
       this->getUnit(0)->battleCry();
       this->getUnit(1)->battleCry();
    }

    this->_count = this->_count +  i;
   
    return this->_count;
}

