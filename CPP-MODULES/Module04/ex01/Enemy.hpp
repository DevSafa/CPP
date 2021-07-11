#ifndef ENEMY_H
# define ENEMY_H
#include <iostream>
#include <string>
class Enemy {
    protected :
        int _hp;
        std::string _type;

    public :
        Enemy( int hp, std::string const & type);
        Enemy( Enemy const &src);                      /* canonical */
        Enemy & operator = (Enemy const & src);        /* canonical */
        virtual  ~Enemy( void );                       /* canonical */
        std::string const & getType() const;
        int getHP() const;
        virtual void takeDamage(int);

    private :
        Enemy( void );                                  /*canonical */

};

//overload the << operator
std::ostream  & operator << (std::ostream &  o, Enemy & enemy);
#endif