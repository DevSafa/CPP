#include "mutantstack.hpp"
#include <iostream>
#include <string>
#include <list>
#include <vector>
int main(){
   std::cout << "1-----------------------------" << std::endl;

   MutantStack<int> stack1;
   for(int i = 0 ; i < 5 ; i++)
        stack1.push(i);             //  4 3 2 1 0 LIFO

    MutantStack<int>::iterator it1, ite1 = stack1.end();
    
    for(it1 = stack1.begin()  ; it1 != ite1 ; ++it1)
        std::cout << *it1  << " ";
    std::cout << "\n";

    std::cout << "Top of stack1     : " << stack1.top() << std::endl;
    std::cout << "Size of stack1    : " << stack1.size() << std::endl;

    stack1.pop();
    for(it1 = stack1.begin()  ; it1 != ite1 ; ++it1)
        std::cout << *it1  << " ";
    std::cout << "\n";
    stack1.pop();
    for(it1 = stack1.begin()  ; it1 != ite1 ; ++it1)
        std::cout << *it1  << " ";
    std::cout << "\n";

    std::cout << "2-----------------------------" << std::endl;

    MutantStack<std::string> stack2;
    stack2.push("Hello");
    stack2.push("world");
    stack2.push("Barka");
    stack2.push("Safa");
    MutantStack<std::string>::iterator it2, ite2 = stack2.end();
    ite2 = stack2.end();
    for(it2 = stack2.begin() ; it2 != ite2 ; it2++)
        std::cout << *it2  << " ";
    std::cout << "\n";

    std::cout << "Top of stack2     : " << stack2.top() << std::endl;
    std::cout << "Size of stack2    : " << stack2.size() << std::endl;

    stack2.pop();
    for(it2 = stack2.begin()  ; it2 != ite2 ; ++it2)
        std::cout << *it2  << " ";
    std::cout << "\n";
    stack2.pop();
    for(it2 = stack2.begin()  ; it2 != ite2 ; ++it2)
        std::cout << *it2  << " ";
    std::cout << "\n";
    stack2.pop();
    for(it2 = stack2.begin()  ; it2 != ite2 ; ++it2)
        std::cout << *it2  << " ";
    std::cout << "\n";
    stack2.pop();
    if(!stack2.empty())
    {
        for(it2 = stack2.begin()  ; it2 != ite2 ; ++it2)
            std::cout << *it2  << " ";
        std::cout << "\n";
    }
    else
        std::cout << "stack is empty " << std::endl;

    std::cout << "3---------------to test--------------" << std::endl;

    MutantStack<int>    mstack;
    mstack.push(5); //5
    mstack.push(17);//17 5
    std::cout <<"top  :" <<  mstack.top() << std::endl; 
    mstack.pop();
    std::cout <<"size :" <<  mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while(it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "top :"<< mstack.top() << std::endl;
     std::stack<int> s(mstack);

    std::cout << "--test copy constructor--" << std::endl;
    MutantStack<int>    cpy(mstack);
    MutantStack<int>::iterator itc = cpy.begin();
    MutantStack<int>::iterator itec = cpy.end();
    ++itc;
    --itc;
    while(itc != itec)
    {
        std::cout << *itc << std::endl;
        ++itc;
    }

    std::cout << "--test assignement operator--" << std::endl;
    cpy = stack1;

    MutantStack<int>::iterator ita = cpy.begin();
    MutantStack<int>::iterator itea = cpy.end();
    ++ita;
    --ita;
    while(ita != itea)
    {
        std::cout << *ita << std::endl;
        ++ita;
    }

    std::cout << "4---------------to compare(list)--------------" << std::endl;

    std::list<int>    lst;
    lst.push_front(5);
    lst.push_front(17);
    std::cout << "top  : " << lst.front() << std::endl;
    lst.pop_front();
    std::cout << "size : " << lst.size() << std::endl;
    lst.push_front(3);
    lst.push_front(5);
    lst.push_front(737);
    //[...]mstack.push(0);
    std::list<int>::iterator itl = lst.begin();
    std::list<int>::iterator itel = lst.end();
    ++itl;
    --itl;
    while(itl != itel)
    {
        std::cout << *itl << std::endl;
        ++itl;
    }
    std::cout << "top :"<< lst.front() << std::endl;
    




   
}