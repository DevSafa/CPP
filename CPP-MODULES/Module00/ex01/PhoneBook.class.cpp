#include <iostream>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void )
{
    this->_limit = 0;
    std::cout << "contrictor called" << std::endl;
}

PhoneBook:: ~PhoneBook( void )
{
    std::cout << "Destructor called" << std::endl;
}

void PhoneBook::add_contact(Contact contact)
{
    this->_contacts[Contact::getNbrContacts() - 1] = contact;
    if(this->_limit != 3)
        this->_limit +=1;
}

int PhoneBook::get_limit( void )
{
    return this->_limit;
}
Contact *PhoneBook::getContacts( void )
{
    return this->_contacts;
}

void PhoneBook::display_contacts( void )
{
    Contact *contacts = PhoneBook::getContacts();
   int i;  
   int nbr;

   i = 0;
   nbr = PhoneBook::get_limit();
   std::cout << "nbr : " << nbr << std::endl;
   while(i < nbr)
   {
       std::cout <<  '-' << contacts[i].getFirstName() << std::endl ;
       i++;
   }
}


