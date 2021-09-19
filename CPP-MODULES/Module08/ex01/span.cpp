#include "span.hpp"
#include <iostream>
#include <algorithm>

Span::Span(unsigned int n){
    if( n >  2147483647)
        throw InvalidNbrOfElements();
    this->max_elements = n;
    nbr_elements = 0;
}

void Span::addNumber(int nbr){
    if(nbr_elements < max_elements)
    {
        vct.push_back(nbr);
        nbr_elements++;
    }
    else
        throw CanNotAddToList();
}


const char * Span::CanNotAddToList::what() const throw(){
    return  "Exception : cannot add to span." ;
}

const char * Span::NoSpanExist::what() const throw(){
    return  "Exception : No span exist." ;
}

int Span::shortestSpan(void)
{
    if(nbr_elements == 0 || nbr_elements== 1)
        throw NoSpanExist();
    std::sort(vct.begin(), vct.end());
    int shortspan = vct[1] - vct[0];
    for(int i = 1 ; i+ 1 < nbr_elements ; i++)
    {
        if(vct[i+1] - vct[i] < shortspan)
            shortspan = vct[i+1] - vct[i];
    }
   return shortspan;
}

int Span::longestSpan(void){
    if(nbr_elements == 0 || nbr_elements == 1)
        throw NoSpanExist();
    std::sort(vct.begin(), vct.end());
    return *(--vct.end()) -  *(vct.begin());
}

void Span::addNumberRange(std::vector<int>::iterator itBegin , std::vector<int>::iterator itEnd){
    for(std::vector<int>::iterator it = itBegin ; it != itEnd ; ++it)
    {
        
        if(nbr_elements > max_elements)
             throw CanNotAddToList();
        int i = *it;
        this->addNumber(i);
     }
}

std::vector<int> Span::getVector(){
    return vct;
}

void Span::displayElements(){
    for(std::vector<int>::iterator  it = vct.begin() ; it != vct.end() ; ++it)
               std::cout << *it << " ";
   std::cout << std::endl;
}


const char * Span::InvalidNbrOfElements::what() const throw(){
    return  "Exception : Invalid nbr of elements" ;
}

// Span::~Span( void ){

// }
// Span::Span(Span & src){
//     *this = src;
// }
// Span & Span::operator = (Span & src){
//     if(this != &src){
//         this->vct = src.getVector();
//     }
//     return *this;
// }