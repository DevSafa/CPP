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

U & min(U &x , U &y )
{
    return ( x < y ? x : y);
}

template <typename U>

U & max(U &x , U &y )
{
    return ( x > y ? x : y);
}

// class Awesome {

//     public :
//         Awesome(int  n ) : _n(n) {}
//         bool operator==(Awesome const & rhs) const {
//             return this->_n == rhs._n;
//         };

//         bool operator !=(Awesome const & rhs) const {
//             return this->_n != rhs._n;
//         };

//         bool operator >(Awesome const & rhs) const  {
//             return this->_n > rhs._n;
//         };

//         bool operator <(Awesome const & rhs) const {
//             return this->_n < rhs._n;
//         };

//         bool operator >=(Awesome const & rhs) const {
//             return this->_n >= rhs._n;
//         };

//         bool operator <=(Awesome const & rhs) const {
//             return this->_n <= rhs._n;
//         };

//         int  getAwesome(){
//             return this->_n;
//         }
//     private :
//         int  _n;
        
// };



#endif