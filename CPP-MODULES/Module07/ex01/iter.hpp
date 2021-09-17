#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
template <typename T1 , typename T2, typename T3> 

void iter(T1 &x, T2  y, T3 f){ //(void) (*f)(T3 const &)
    
    for(int i = 0; i < y ; i++)
        f(x[i]);
}

template <typename T>

void add5(T & element){
    element = element + 5;
}

template <typename U>
void displayElements(U & x)
{
    int len = std::end(x) - std::begin(x);
    for(int i = 0 ; i < len ; i++)
        std::cout << x[i] << " " ;
    std::cout << std::endl;
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

template<typename T4>
void print(T4 const & x){
    std::cout << x << std::endl;
    return ;
}


#endif