#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {
    public :
        Sample( void );
        ~Sample( void );

        // four overload of a bar bracket memeber functions
        // function overloading is not just for member class member functions , it works for any function
        void bar( char const c ) const;
        void bar(int const n) const;
        void bar( float const z) const;
        void bar( Sample const & i ) const;
};


#endif