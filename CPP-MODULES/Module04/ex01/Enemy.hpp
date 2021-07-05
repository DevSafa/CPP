#ifndef ENEMY_H
# define ENEMY_H

class Enemy {
    protected :
        int hp;
        std::string type;

    public :
        Enemy( int hp, std::string const & type);
        Enemy( Enemy const &src);
        Enemy & operator = (Enemy const & src);
        ~Enemy( void );

    private:
        Enemy( void );

};

#endif