#include "Position.hpp"

void Position::setx(int x)
{
    this->_x = x;
}

void Position::sety(int y)
{
    this->_y = y;
}

int Position::getx()
{
    return this->_x;
}

int Position::gety()
{
    return this->_y;
}

Position Position::operator + (Position pos){
    Position new_pos;
    new_pos.setx(this->getx() + pos.getx());
    new_pos.sety(this->gety() + pos.gety());
    return new_pos;
}

bool Position::operator == (Position pos)
{
    if(this->getx() == pos.getx() && 
        this->gety() == pos.gety())
        return true;
    return false;

}