#ifndef SAMPLE1_CLASS_H
# define SAMPLE1_CLASS_H

class Sample1 {
    public:
        Sample1( int v );
        ~Sample1( void );

        int getFoo( void ) const;
        int compare(Sample1 * other)const;
    
    private:
        int _foo;
};

#endif