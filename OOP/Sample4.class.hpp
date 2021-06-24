#ifndef SAMPLE4_CLASS_H
# define SAMPLE4_CLASS_H

//public and private will allow me to controle encapsulation of the members of our class
//meaning the attributes and member functions that will only be visible from inside the class or from the outside
class Sample4{

    //when you define public functions or attributes , it will be possible to access them from inside the class
    // and from ooutside the class
    public:

        int publicFoo;
        Sample4( void );
        ~Sample4( void );

        void publicBar( void ) const;

    //when  we declare private attributes or functions , they will be only accessible from inside the class
    //they are perfectly invisible , and inaccessible from outside the class
    //if you try to do it the code won't compile
    private:

        int     _privateFoo;
        void    _privateBar( void )const;
};

#endif