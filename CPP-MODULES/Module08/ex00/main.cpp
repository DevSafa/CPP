#include "easyfind.hpp"
#include <list>
#include <vector>
int main(){
    std::cout << "1---------List---------\n" << std::endl;
    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(10);
    lst.push_back(55);
    lst.push_back(-2);

    for(std::list<int>::iterator  it = lst.begin() ; it != lst.end() ; ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    try{
        /* remove the element iterator erase( iterator pos ); */
        lst.erase(easyfind(lst,10));

        /*  inserts value before pos  iterator insert( iterator pos, const T& value );*/
        lst.insert(easyfind(lst,55),-3);

        std::cout << "find -3  : " <<  *easyfind(lst,-3) << std::endl;
        std::cout << "find 55   : " << *easyfind(lst,55) << std::endl;
        
        
        std::cout <<  "check exception for 20 : "<< std::endl;
        lst.erase(easyfind(lst,-20));
        
    }
    catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }
 
    for(std::list<int>::iterator  it = lst.begin() ; it != lst.end() ; ++it)
        std::cout << *it << " ";

    std::cout << "\n2--------Vector----------\n" << std::endl;

    std::vector<int> vct;
    vct.push_back(15);
    vct.push_back(47);
    vct.push_back(-10);
    vct.push_back(456);

    try{
        
        std::cout << "find -10  : " << *easyfind(vct,-10) << std::endl;
        std::cout << "find 47   : " << *easyfind(vct,47) << std::endl;
        std::cout << "find -10  : " << *easyfind(vct,-10) << std::endl;


        std::cout << "find -1   : " << *easyfind(vct,-1) << std::endl;
    }
    catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }
    for(std::vector<int>::iterator it = vct.begin() ; it != vct.end() ; ++it)
        std::cout << *it << " ";

}