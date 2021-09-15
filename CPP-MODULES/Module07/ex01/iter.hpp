#ifndef ITER_HPP
# define ITER_HPP

template <typename T1> // the address of an array
template <typename T2>  // the length of the array
template <typename T3> // a function called for each element of an array

void iter(T1, T2, T3){
    
    for(int i = 0; i < T2 ; i++)
        T3(T1[i]);
}



#endif