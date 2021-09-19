#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>

class NotFoundException :  public std::exception {
    public :
    virtual const char *what() const throw(){
        return "the element not found in the container";
    }
};

template <typename T>

/*T is a container of int*/
/*find the first occurence of the second parameter in the first parameter*/
int  & easyfind(T &container, int tofind)
{
     typename T::iterator it =std::find(container.begin() , container.end() , tofind);
     if(it != container.end())
        return *it;
    throw NotFoundException();
}

#endif

//https://stackoverflow.com/questions/610245/where-and-why-do-i-have-to-put-the-template-and-typename-keywords
//https://www.ibm.com/docs/en/i/7.3?topic=only-typename-keyword-c

