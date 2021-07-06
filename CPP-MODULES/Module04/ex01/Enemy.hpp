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
        Enemy( void );
        Enemy( Enemy const &src);
        Enemy & operator = (Enemy const & src);
        virtual ~Enemy( void );
        virtual std::string const & getType() const;
        int getHP() const;
        void setHP(int hp);
        virtual void takeDamage(int);


};

#endif