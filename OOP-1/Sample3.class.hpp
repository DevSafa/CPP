#ifndef SAMPLE3_CLASS_H
# define SAMPLE3_CLASS_H

class Sample3{

    public:
    //const attribute of float
        float const pi;
        int         qd;

        Sample3(float const f);
        ~Sample3( void );

        //use thr const keyword
        // in c++ when you placing the const keyword between the closing brackets,
        //you telling the compiler that this member function won't altering the current instance
        //we doont have any this assignition ,>= > < ...
        //if you write this it won't compile 
        void bar( void ) const;
};


#endif