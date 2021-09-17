#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
    public :
        //default constructor
        Array( void ){
            array = new T[0];
            len = 0;
        };

        //parametric constructor
        Array( unsigned int n ){
            array = new T[n];
            len = n;
        };

        //construction by copy
        Array(Array & src){
            *this = src;
        };
        //overload of the opeartor []

        T & operator [](int index){
           // std::cout << "operator[]" << std::endl;
            if(index <= len -1)
                return array[index];
            throw std::exception();
        }
        //assignement operator
        Array & operator = (Array & src){
            std::cout << "operator =" << std::endl;
            if(this!= &src){
                int len = src.getLen();
                Array *newArray = new T[len];
                newArray->len = len;
                for(int i = 0; i < len ; i++){
                    newArray[i] = src[i];
                }
                //delete[] array;
                array = newArray;
            }
        }
        int  size() const {
            return this->len;
        }
    

    private :
        T *array;
        int len ;
};

template <typename T>
std::ostream & operator << (std::ostream & o , Array<T> & a){
    o << &a;
    return o;
}





#endif


/*

int& Array::operator[](int index)
{
    if (index >= size) {
        cout << "Array index out of bound, exiting";
        exit(0);
    }
    return ptr[index];
}

*/