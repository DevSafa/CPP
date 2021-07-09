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

   if(i >= 0 && i < this->getCount())
   {
      
        return this->_units[i];
   }
   return NULL;
}


int Squad::push(ISpaceMarine* unit)
{
    ISpaceMarine ** new_array;
    int i ;
    if(unit == NULL)
        return this->_count;
    for(i = 0; i < this->_count ; i++)
    {
        if(this->_units[i] == unit)
            return this->_count;
        i++;
    }

    if(this->_units == NULL)
    {
        std::cout << "first" << std::endl;
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

