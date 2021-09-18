#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
    public :
        //Construction with no parameter: creates an empty array
        Array( void ){
            array = new T[0];
            len = 0;
        };

        //Construction with anunsigned int nas a parameter:
        //creates an array ofnele-ments, initialized by defau
        Array( unsigned int n ){
            array = new T[n];
            len = n;
        };

        //construction by copy
        Array(Array & src){
            *this = src;
        };
        
        //assignement operator
        Array & operator = (Array<T> & src){
            if(this!= &src)
            {
                int len = src.size();
                this->array = new T[len];
                this->len = len;
                for(int i = 0; i < len ; i++){
                    (this->array)[i] = src[i];
                }
            }
            return *this;
        }
        //overload of the opeartor []
        T & operator [](int index){
            if(index <= len -1)
                return array[index];
            throw IndexOutOfRange();
        }
  
        int  size() const {
            return this->len;
        }
        class IndexOutOfRange : public std::exception{
            public :
                virtual const char *what() const throw(){
                    return "Index out of range";
                }
        };

    private :
        T *array;
        int len ;
};



template <typename T>
std::ostream & operator << (std::ostream & o , Array<T> & a){
    o << a[0];
    return o;
}




// class Awesome
// {
//     public :
//     Awesome(void) : _n(42){return;}
//     int get(void)const {return this->_n;}

//     private :
//         int _n;
// };

// std::ostream & operator << (std::ostream & o, Awesome const &rhs){
//     o<< rhs.get();
//     return o;
// }



#endif
