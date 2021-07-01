
//1 + 1 we call it infix notation because the plus operator is between the two operands infix like in

// + 1 1 the prefix notation  , it looks like +(1,1 <=> 1.+(1)

// 1 1 + the postfix notation
#ifndef INTEGER_H
# define INTEGER_H
#include <iostream>
class Integer {

    public:
        Integer(int const n);
        ~Integer( void );

        int getValue( void ) const;
        
        //assignement operator overload
        // a have a hidden parameter that is hidden that represent the current instance over time
        // the current instance will be returned
        //a = b = c = d , i returned the instance so i can achieve a chaining assignements
        Integer & operator=(Integer const & rhs);
        //addition operator overload
        Integer operator+( Integer const & rhs) const;

    private:
        int _n;
};

std::ostream & operator<<( std::ostream & o, Integer const &rhs);

#endif
