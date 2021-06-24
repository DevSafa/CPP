#ifndef SAMPLE6_CLASS_H
# define SAMPLE6_CLASS_H

//the difference between a struct and a class in c++
//is that the scope of the structure is public by default 
// the scope of the class is private by default
class Sample6{
    
    int     foo;

    Sample6( void );
    ~Sample6( void );

    void bar( void ) const;
};

#endif