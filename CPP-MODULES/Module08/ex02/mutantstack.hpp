#ifndef MUTUNT_STACK_HPP
# define MUTUNT_STACK_HPP

#include <stack>
#include <deque>
#include <list>
/*
    -----------------------------------------------
    typedef typename _MyBase::value_type value_type;
    -----------------------------------------------

    - typename here is letting the compiler know that value_type is a type 
    and not a static member of _MyBase
    the :: is the scope of the type
    It is kind of like "is in" so value_type "is in" _MyBase

    - typedef is defining a new type for use in your code


    ----------------------------------------------------
    Iterators are used to point at the memory addresses of STL containers. 
    They reduce the complexity and execution time of program.

    ----------------------------------------------------
    Constructs new underlying container of the container adaptor from a variety of data sources
        std::stack<T,Container>::stack.

    ----------------------------------------------------
    A stack is a standard C++ container adapter, designed to be used in a LIFO 
    context,[1] and is implemented with an interface/wrapper to the type passed 
    to it as a template argument, which defaults to a deque.
    
    template<class T, Class C = deque<T> >
    class std::stack {

    protected:

        C c;

    public:

        typedef typename C::value_type value_type;

        typedef typename C::size_type size_type;

        typedef C container_type;

    ------------------------------------------
    Stacks are a type of container adaptors with LIFO(Last In First Out) type of 
    working, where a new element is added at one end (top) and an element is 
    removed from that end only.  Stack uses an encapsulated object of either vector 
    or deque (by default) or list (sequential container class) as its underlying 
    container, providing a specific set of member functions to access its elements

    The std::stack class is a container adapter that gives the programmer the functionality of a stack - specifically, a LIFO (last-in, first-out) data structure. 

};





*/
template <typename T>

class MutantStack :public  std::stack<T>{
     
    public :
        typedef   typename std::deque<T>::iterator iterator; 

        MutantStack( void ) : std::stack<T>(){};                /*canonical*/
        MutantStack(MutantStack & src) : std::stack<T>(src){

        };  /*canonical */
       ~MutantStack(void){} ;                                    /*canonical */
       MutantStack & operator = (MutantStack & src){            /*canonical */
            std::stack<T>::operator =(src);
            return *this;
       }
        /* Inserts a new element at the top of the stack, above its current top element */
        void push(const T & val){
            this->c.push_front(val);
        };
        /* Returns a reference to the top element in the stack */
        T & top(){
          return this->c.front();
        };
        /* Removes the element on top of the stack */            
        void pop() {
            this->c.pop_front();
        };

        bool empty() const{
            return  this->c.empty();
        };

        size_t size() const {
           return this->c.size();
        };

        iterator begin(){
            return this->c.begin();
        }

        iterator end(){
            return this->c.end();
        }

};



# endif


//https://stackoverflow.com/questions/18385418/c-meaning-of-a-statement-combining-typedef-and-typename