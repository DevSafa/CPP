#ifndef POSITION_H
# define POSITION_H

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


#endif