#ifndef POSITION_H
# define POSITION_H
#include <iostream>
class Position
{
    public:

        void setx(int x);
        void sety(int y);
        int getx();
        int gety();

        //overload the plus operator
        Position operator + (Position pos);

        //overload the comparaison operator
        bool operator == (Position pos);
    private:
        int _x;
        int _y;
    
};
//overloading the insetion oerator is different
//because for  + operator and comparison operator pos1 + pos2  (pos1 == pos2) we have entities of the same type

//now it's a little bit different because we have cout innn the left and Position in  the right

// this function will return an ostream, the reason that it will return ostream is because cout is an object of type ostream,
//we return cout so that we append more staff to expression, 
//actually we want to return a reference to teh same object ostream , we don't want to make a copy (std::ostream&)=> a reference
// we will have two parameters : cout the one on the left , and in the right Position object
std::ostream& operator << (std::ostream& output, Position pos);

std::istream& operator >> (std::istream& input, Position &pos);
#endif