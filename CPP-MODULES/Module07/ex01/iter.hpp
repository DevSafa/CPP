#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>


template <typename T >
void iter(T *x, int  y,    void (*f)(T const   &)){
   for(int i = 0;  i < y ; i++)
       f(x[i]);
}

template <typename T>
void displayElements(T const &x, int y)
{
    for(int i = 0 ; i < y ; i++)
        std::cout << x[i] << " " ;
    std::cout << std::endl;
}

template <typename T>
void add5(T const & element){
    T newElement = element + 5;
    std::cout << newElement << " " ;
}

template<typename T>
void print(T const & x){
    std::cout << x << std::endl;
    return ;
}

class Awesome
{
    public :
    Awesome(void) : _n(42){return;}
    int get(void)const {return this->_n;}

    private :
        int _n;
};

std::ostream & operator << (std::ostream & o, Awesome const &rhs){
    o<< rhs.get();
    return o;
}




#endif