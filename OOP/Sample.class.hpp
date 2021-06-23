#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H


class Sample { 

    public:
        //member attribute
        // a member attribute is just a variable that you have in your class, and that you may use from 
        //your instance.
        //meaning that you have a foo variable set up in your every instance of your class
        int foo;

        Sample( void ); 
        ~Sample( void );

        //member function
        //meaning a function of my class that i will be able to use in every instance of my class
        void bar( void ); 

};


#endif
