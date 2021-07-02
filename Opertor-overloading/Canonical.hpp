#ifndef CANONICAL_H
# define CANONICAL_H

// a class is a canonical form when it has at least a default constructor, a copy constructor , assignement operator , destructor
// this four elements will allow your class to be called a coplin or Canonical form.
// need to learn about virtual keyword to make the class canonical
class Canonical {
    public:
        //default constructor
        Canonical( void );                  //canonical
        Canonical( int const n);
        //copy constructor , meaning a constructor that taking as a parmeter an instance of the class that we are defining
        // to make a copy of this class
        Canonical( Canonical const & src);  //canonical
        //destructor
        ~Canonical( void );                 //canonical

        //assignement operator
        Canonical & operator=(Canonical const & rhs); //canonical

        int getFoo( void )const;
    
    private:
        int _foo;
};

std::ostream & operator<<( std::ostream & o , Canonical const & i);


#endif