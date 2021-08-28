#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
     Form("Shrubbery Creation",137,45)
{
   
    this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
    std::cout << "destroy Shrubbery form" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (ShrubberyCreationForm const  & src){
    if(this != &src)
    {
       // Form::operator = (src);
        this->_target = src._target;
    }
    return *this;
}

std::string ShrubberyCreationForm::getTarget( void ) const {
    return  this->_target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const  & src) :
     Form("Shrubbery Creation",137,45)
{
    *this = src;
}

void ShrubberyCreationForm::execute(Bureaucrat  const & executor) const {
    if(!this->getIsSigned())
        throw Form::FormNotSignedEXception();
    if(executor.getGrade() > this->getGradeExecute())
        throw Form::GradeTooLowException();
    
   std::ofstream file;//((this->getTarget()+ "_shrubbery").c_str());
   file.open((this->getTarget() + "_shrubbery").c_str());
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
   {
       throw FileNotCreatedException();
       //throw an exception
   }

   file.close();
}

const char * ShrubberyCreationForm::FileNotCreatedException::what() const  throw(){
        return "Form Exception: failed to create file" ;
 }

// std::ostream & operator << (std::ostream & o , ShrubberyCreationForm const & sf)
// {
//         o << "form name : " << sf.getName() << std::endl;
//     if(sf.getIsSigned())
//         o << "is signed : " << "True" << std::endl;
//     else
//         o << "is signed : " << "False" << std::endl;
//     o << "grade to sign it : " << sf.getGradeSignIt() << std::endl;
//     o << "grade to execute it : " << sf.getGradeExecute() << std::endl;
//     o << "target is " << sf.getTarget() << std::endl;
//     return o;
// }

//http://websites.umich.edu/~eecs381/handouts/filestreams.pdf