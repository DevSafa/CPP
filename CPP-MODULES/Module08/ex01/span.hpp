#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>

#include <algorithm>
class Span {
    private:
        Span( void);                    //canonical
        
    public:
       // Span(Span & src);               //canonical;
       // Span & operator = (Span & src); //canonical
       // ~Span( void );
        Span(unsigned int n);
        void addNumber(int nbr);
        int shortestSpan(void );
        int longestSpan();
        void addNumberRange(std::vector<int>::iterator itBegin , std::vector<int>::iterator itEnd);
        void displayElements();
        std::vector<int> getVector();
        class CanNotAddToList :public std::exception {
            public :
                virtual const char *what() const throw();
        };

        class NoSpanExist:public std::exception {
            public:
                virtual const char *what() const throw();
        };

        class InvalidNbrOfElements:public std::exception {
            public:
                virtual const char *what() const throw();
        };
        
    private: 
        int max_elements;
        int nbr_elements;
        std::vector<int> vct;
};



#endif