#include "span.hpp"
#include <iostream>
#include <list>
int main(){
   std::cout << "1---------------" << std::endl;
   Span sp1 =Span(5);
   std::cout << "Elements        : " ;
   sp1.displayElements();
   sp1.addNumber(5);
   sp1.addNumber(3);
   sp1.addNumber(17);
   sp1.addNumber(9);
   sp1.addNumber(11);

   std::cout << "shortest Span   : " << sp1.shortestSpan() << std::endl;
   std::cout << "longest Span    : " << sp1.longestSpan() << std::endl;
   std::cout << "Elements        : " ;
   sp1.displayElements();
   std::cout << "2---------------" << std::endl;

   Span sp2 =Span(5);

   sp2.addNumber(1);
   sp2.addNumber(12);
   sp2.addNumber(17);
   sp2.addNumber(13);
   sp2.addNumber(11);

   std::cout << "shortest Span   : " << sp2.shortestSpan() << std::endl;
   std::cout << "longest Span    : " << sp2.longestSpan() << std::endl;
   std::cout << "Elements        : " ;
   sp2.displayElements();
   std::cout << "3---------------" << std::endl;

   Span sp3 =Span(2);
   try{
         sp3.addNumber(1);
         sp3.addNumber(12);
         sp3.addNumber(5);
   }catch(std::exception &e){
      std::cout << e.what() << std::endl;
   }

   std::cout << "shortest Span   : " << sp3.shortestSpan() << std::endl;
   std::cout << "longest Span    : " << sp3.longestSpan() << std::endl;
   std::cout << "Elements        : " ;
   sp3.displayElements();

   std::cout << "4---------------" << std::endl;

   Span sp4 = Span(1);
    try{
         sp4.addNumber(1);
         sp4.addNumber(12);
         sp4.addNumber(5);
   }catch(std::exception &e){
      std::cout << e.what() << std::endl;
   }
   try{
      std::cout << "shortest Span   : " << sp4.shortestSpan() << std::endl;
      std::cout << "longest Span    : " << sp4.longestSpan() << std::endl;

   }catch(std::exception &e){
      std::cout << e.what() << std::endl;
   }

   std::cout << "5---------------" << std::endl;

   Span sp6(0);
   try{
      std::cout << "longest Span    : " << sp6.longestSpan() << std::endl;

   }catch(std::exception &e){
      std::cout << e.what() << std::endl;
   }

   std::cout << "6---------------" << std::endl;
   Span sp7(20);

   sp7.addNumber(98);
   std::srand(unsigned(std::time(nullptr)));
   std::vector<int> v(10);
   std::generate(v.begin(), v.end(), std::rand);

   try{
      sp7.addNumberRange(v.begin(), v.end());

   }catch(std::exception & e)
   {
      std::cout << e.what() << std::endl;
   }
   std::cout << "Elements        : " ;
   sp7.displayElements();


   std::cout << "7---------------" << std::endl;
   Span sp8(1000);

  sp8.addNumber(4);
   std::srand(unsigned(std::time(nullptr)));
   std::vector<int> v1(1000);
   std::generate(v1.begin(), v1.end(), std::rand);

   try{
      sp8.addNumberRange(v1.begin(), v1.end());

   }catch(std::exception & e)
   {
      std::cout << e.what() << std::endl;
   }
   std::cout << "Elements        : " ;
   sp8.displayElements();

   std::cout << "8---------------" << std::endl;
   try{
      Span sp9(-1);
      //sp9.addNumber(3);
   }catch(std::exception &e)
   {
      std::cout << e.what() << std::endl;
   }

   std::cout << "9---------------" << std::endl;

   std::list<int> l;
   l.push_back(45);
   l.push_back(23);
   l.push_back(35);


   Span sp10(4);
   sp10.addNumberRange(l.begin() , l.end());

   sp10.displayElements();

  
}

