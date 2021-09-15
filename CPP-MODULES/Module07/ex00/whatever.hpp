#ifndef WHATEVER_HPP
# define WHATEVER_HPP
#include <iostream>
template <typename U>
void swap(U & x , U & y){
    U tmp = x;
    x = y;

    y = tmp;
}

template <typename U>

U min(U &x , U &y )
{
    return ( x < y ? x : y);
}

template <typename U>

U max(U &x , U &y )
{
    return ( x > y ? x : y);
}

#endif