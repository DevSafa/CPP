#include "span.hpp"
#include <iostream>
Span::Span(unsigned int n){
    this->_n = n;
}

void Span::addNumber(int nbr){
    if(lst.size() < _n)
        lst.push_back(nbr);
    else
        throw CanNotAddToList();
}


const char * Span::CanNotAddToList::what() const throw(){
    return  "cannot add to List Exception" ;
}

const char * Span::NoSpanExist::what() const throw(){
    return  "No span exist" ;
}

int Span::shortestSpan(void)
{
    if(lst.size() == 0 || lst.size() == 1)
        throw NoSpanExist();
    lst.sort();
    std::list<int>::iterator it  = ++lst.begin();
    int shortspan = *(it) - *(--it);
    std::advance(it, 2);
  
   for(std::list<int>::iterator itn  = it ; itn != lst.end() ; itn++){
       std::list<int>::iterator tmp = itn; 

       --tmp;
      if(*(itn) -  (*tmp)  <  shortspan)
          shortspan = *(itn) -  (*tmp) ;
   }
    return shortspan;
}

int Span::longestSpan(void){
    lst.sort();
    return *(--lst.end()) -  *(lst.begin());
  return 1;
}