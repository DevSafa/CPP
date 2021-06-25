#include "Contact.class.hpp"
#include <iostream>


Contact::Contact( void ){
   // std::cout << "Contructur called" << std::endl;
    if(Contact::_nbrContacts == 8)
        Contact::_nbrContacts = 0;
    Contact::_nbrContacts +=1;
}
Contact::~Contact( void ){
   // std::cout << "Destructor called" << std::endl;
}

void Contact::setFirstName(string first_name){
    this->_first_name= first_name;
}

void Contact::setLastName(string last_name){
    this->_last_name= last_name;
}

void Contact::setNickname(string nickname){
    this->_nickname= nickname;
}
void Contact::setPhoneNumber(string phone_number){
    this->_phone_number= phone_number;
}

void Contact::setDarkestSecret(string darkest_secret){
    this->_darkest_secret= darkest_secret;
}

string Contact::getFirstName(){
    return this->_first_name;
}

string Contact::getLastName(){
    return this->_last_name;
}

int Contact::getNbrContacts()
{
    return Contact::_nbrContacts;
}


string Contact::getNickName(){
    return this->_nickname;
}

string Contact::getPhoneNumber(){
    return this->_phone_number;
}

string Contact::getDarkestSecret(){
    return this->_darkest_secret;
}

int Contact::_nbrContacts = 0;