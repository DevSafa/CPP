#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H


class Sample { // class keyword followed by identifier Sample that allow us to identify this class

    public: // public keyword

        Sample( void ); // declare constructor
        ~Sample( void ); // and destructor from my class

        //constructor and distructor don't have a return type
        //c++ uses the name of the class for destructor ,
        //and name of the class preceded by ~ for destruction.

        
};


#endif

//Sample.class.hpp is a class header
//hpp extension to define my c++ headers
//in .h or .hpp we will able to declare the class and the functions and attributes that contains