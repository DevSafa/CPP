#include "Karen.hpp"
#include <iostream>

void Karen::debug( void ){
    std::cout << "DEBUG" << std::endl;
    std::cout <<  "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" ;
}

void Karen::info( void ){

    std::cout << "INFO" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" ;
}

void Karen::warning( void ){
    std::cout << "WARNING" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void Karen::error( void ){
    std::cout << "ERROR" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void Karen::complain(std::string level) {

    if(level != "debug" && level != "info" &&  level != "warning" && level != "error")
        std::cout << "no level with that name" << std::endl;

    std::string levels[4];
    levels[0] ="debug";
    levels[1] = "info";
    levels[2]="warning";
    levels[3] = "error";

    void (Karen::*f[4])( void );
    f[0] = &Karen::debug;
    f[1] = &Karen::info;
    f[2] = &Karen::warning;
    f[3] = &Karen::error;


    for(int i = 0 ; i < 4 ; i++)
    {
        if (level == levels[i])
             (this->*f[i])();
    }
   

   
    

    
   

}