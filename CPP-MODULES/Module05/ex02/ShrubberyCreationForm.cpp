#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
/* 
(Required grades: sign 145, exec 137).
 Action:
  Create a file called <target>_shrubbery, 
  and write ASCII trees inside it, in the current directory.
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
     Form("Shrubbery Creation",137,145)
{
   
    this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
    std::cout << "destroy Shrubbery form" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (ShrubberyCreationForm const  & src){
    if(this != &src)
        this->_target = src._target;
    return *this;
}

std::string  const & ShrubberyCreationForm::getTarget( void ) const {
    return  this->_target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const  & src) :
     Form("Shrubbery Creation",137,145)
{
    *this = src;
}

void ShrubberyCreationForm::execute(Bureaucrat  const & executor) const {
   Form::checkForm(executor);
   std::ofstream file;
   file.open((this->getTarget() + "_shrubbery").c_str());
    //we can use std::stringstream to write the trees.
   if(file.is_open())
   {
        file <<"                   .     .  .      +     .      .          ."<< std::endl;
        file <<"              .       .      .     #       .           ." << std::endl;
        file <<"                 .      .         ###            .      .      ." << std::endl;
        file <<"                .      .   #:. .:####:. .:#  .      ." << std::endl;
        file <<"                    .      . ###########  ." << std::endl;
        file <<"                .      #:.    .:#####:.    .:#  .        .       ." << std::endl;
        file <<"           .             ##################        .        ." << std::endl;
        file <<"                   .    #:.  ###########  .:#   .       ." << std::endl;
        file <<"                .     .  ##################                  ."<< std::endl;
        file <<"                          .##############           .      ." << std::endl;
        file <<"              .   #:. ...  .:##########:.  ... .:#     ." << std::endl;
        file <<"                .     #######################      .     ." << std::endl;
        file <<"              .    .     #################    .      ." << std::endl;
        file <<"                    .           000          .     ." << std::endl;
        file <<"              .         .   .   000     .        .       ." << std::endl;
        file <<"       .. .. ..................O000O........................ ...... ... "<< std::endl;

        file << std::endl;

    file <<"              v           " << std::endl; 
    file <<"             >X<          " << std::endl;
    file <<"              A           " << std::endl;
    file <<"             d$b          " << std::endl;
    file <<"           .d$$b.         " << std::endl;
    file <<"         .d$i$$$$b.       " << std::endl;
    file <<"            d$$@b         " << std::endl;
    file <<"           d$$$ib         " << std::endl;
    file <<"         .d$$$$$$b        " << std::endl;
    file <<"       .d$$@$$$$$$ib.     "<< std::endl;
    file <<"          d$$i$$b         "<< std::endl;
    file <<"         d$$$$@$b         "<< std::endl;
    file <<"       .d$@$$$$$$$@b.     "<< std::endl;
    file <<"     .d$$$$i$$$$$$$$$b.   "<< std::endl;
    file <<"             ###          "<< std::endl;
    file <<"             ###          "<< std::endl;
    file <<"             ###          " << std::endl;


    file << std::endl;

    file <<"                        /\\                     " << std::endl;
    file <<"                       <  >                    " << std::endl;
    file <<"                        \\/                     " << std::endl;
    file <<"                        /\\                     " << std::endl;
    file <<"                       /  \\                    " << std::endl;
    file <<"                      /++++\\                   " << std::endl;
    file <<"                     /  ()  \\                  " << std::endl;
    file <<"                     /      \\                  " << std::endl;
    file <<"                    /~`~`~`~`\\                 " << std::endl;
    file <<"                   /  ()  ()  \\                " << std::endl;
    file <<"                   /          \\                " << std::endl;
    file <<"                  /*&*&*&*&*&*&\\               " << std::endl;
    file <<"                 /  ()  ()  ()  \\              " << std::endl;
    file <<"                 /              \\              " << std::endl;
    file <<"                /++++++++++++++++\\             " << std::endl;
    file <<"               /  ()  ()  ()  ()  \\            " << std::endl;
    file <<"               /                  \\            " << std::endl;
    file <<"              /~`~`~`~`~`~`~`~`~`~`\\           " << std::endl;
    file <<"             /  ()  ()  ()  ()  ()  \\          " << std::endl;
    file <<"             /*&*&*&*&*&*&*&*&*&*&*&\\          " << std::endl;
    file <<"            /                        \\         " << std::endl;
    file <<"           /,.,.,.,.,.,.,.,.,.,.,.,.,.\\        " << std::endl;
    file <<"                       |   |                   " << std::endl;
    file <<"                      |`````|                  " << std::endl;
    file <<"                      |_____|                  " << std::endl;
   }else //file not successfully opened
       throw FileNotCreatedException(); 

   file.close();
}

const char * ShrubberyCreationForm::FileNotCreatedException::what() const  throw(){
        return "Form Exception: failed to create file" ;
 }


//http://websites.umich.edu/~eecs381/handouts/filestreams.pdf