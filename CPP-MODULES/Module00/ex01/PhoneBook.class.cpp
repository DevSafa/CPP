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
    if(this->_limit != 8)
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
   std::cout << "     index|first name| last name|  nickname" << std::endl;

    int k = 0;
    int j = 0;
   while(i < nbr)
   {
       k = 0;
        while(k < 9)
        {
           std::cout << " ";
           k++;
        }
        std::cout << i+1 << "|";
      //----------------------------------------
        k = 0;
        if (contacts[i].getFirstName().length() > 10)
        {
             while(k < 9)
            {
                std::cout << contacts[i].getFirstName()[k];
                k++;
            }
            std::cout << "."  << "|";
        }
        else
        {
            k = 0;
            while(k < 10 - (contacts[i].getFirstName().length()))
            {
                std::cout << " ";
                k++;
            }
            std::cout << contacts[i].getFirstName() << '|';
        }
       //--------------------------------------------
        k = 0;
        if (contacts[i].getLastName().length() > 10)
        {
             while(k < 9)
            {
                std::cout << contacts[i].getLastName()[k];
                k++;
            }
            std::cout << "."  << "|";
        }
        else
        {
            k = 0;
            while(k < 10 - (contacts[i].getLastName().length()))
            {
                std::cout << " ";
                k++;
            }
            std::cout << contacts[i].getLastName() << '|';
        }
        //--------------------------------------------
        k = 0;
        if (contacts[i].getNickName().length() > 10)
        {
             while(k < 9)
            {
                std::cout << contacts[i].getNickName()[k];
                k++;
            }
            std::cout << ".";
        }
        else
        {
            k = 0;
            while(k < 10 - (contacts[i].getNickName().length()))
            {
                std::cout << " ";
                k++;
            }
            std::cout << contacts[i].getNickName();
        }


        std::cout << std::endl;
        i++;
   }
    // int index;

    // std::cout << "Enter an index : ";
    // std::cin >> index;

    // std::cout << contacts[i].getFirstName() << std::endl;
    //     std::cout << contacts[i].getLastName() << std::endl;
    //     std::cout << contacts[i].getNickName() << std::endl;
    //     std::cout << contacts[i].getPhoneNumber() << std::endl;

}


