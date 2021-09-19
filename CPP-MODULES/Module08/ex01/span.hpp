#ifndef SPAN_HPP
#define SPAN_HPP
#include <list>

#include <algorithm>
class Span {
    public:
        Span(unsigned int n);
        void addNumber(int nbr);
        int shortestSpan(void );
        int longestSpan();
        class CanNotAddToList :public std::exception {
            public :
                virtual const char *what() const throw();
        };

        class NoSpanExist:public std::exception {
            public:
                virtual const char *what() const throw();
        };
    private: 
        unsigned int _n;
        std::list<int> lst;
};



#endif