#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ){
    this->_nbrContacts = 0;
}

PhoneBook:: ~PhoneBook( void ){
    //destructor
}

void PhoneBook::getDataByIndex(int index)
{
    Contact *contacts = PhoneBook::getContacts();

    if(index -1 >= 0 && (index - 1) < PhoneBook::getnbrContacts())
    {
        std::cout << BOLDGREEN << "\tFirst name   : " << BOLDWHITE << contacts[index-1].getFirstName() << "\033[0m" << std::endl;
        std::cout << BOLDGREEN << "\tLast name    : " << BOLDWHITE <<  contacts[index-1].getLastName() << "\033[0m" << std::endl;
        std::cout << BOLDGREEN << "\tNickname     : " << BOLDWHITE << contacts[index-1].getNickName() << "\033[0m" << std::endl;
        std::cout << BOLDGREEN << "\tPhone number : " << BOLDWHITE << contacts[index-1].getPhoneNumber() << "\033[0m" << std::endl;
    }   
    else
        std::cout << BOLDYELLOW << "no contact with that indice !!!" << "\033[0m" << std::endl;
}

void PhoneBook::addContact(Contact contact){
    this->_contacts[Contact::getNbrContacts() - 1] = contact;
    if(this->_nbrContacts != 8)
        this->_nbrContacts +=1;
}

int PhoneBook::getnbrContacts( void ){  
    return this->_nbrContacts;
}

Contact *PhoneBook::getContacts( void ){
    return this->_contacts;
}

void PhoneBook::displayContacts( void )
{
    Contact *contacts;
    int     i;  
    int     nbr;

    i = 0;
    contacts = PhoneBook::getContacts();
    nbr = PhoneBook::getnbrContacts();
    std::cout << BOLDGREEN ;
    std::cout << std::right << std::setw(11) << "index|";
    std::cout << std::right << std::setw(11) << "first name|";
    std::cout << std::right << std::setw(11) << "last name|";
    std::cout << std::right << std::setw(11) << "nickname|";
    std::cout << "\033[0m"<< std::endl;

    while(i < nbr)
    {
        std::cout << std::right << std::setw(10) << i + 1<< "|";
        std::cout << std::right << std::setw(10);
        std::cout << std::right << std::setw(10);
        if(contacts[i].getFirstName().length() > 10)
            std::cout  <<  contacts[i].getFirstName().substr(0,9) + "." << "|";
        else
            std::cout << contacts[i].getFirstName() << "|" ;
        std::cout << std::right << std::setw(10);
        if(contacts[i].getLastName().length() > 10)
            std::cout  << contacts[i].getLastName().substr(0,9) + "." << "|";
        else
            std::cout << contacts[i].getLastName() << "|" ;
        std::cout << std::right << std::setw(10);
        if (contacts[i].getNickName().length() > 10)
            std::cout  << contacts[i].getNickName().substr(0,9) + "." << "|";
        else
            std::cout << contacts[i].getNickName() << "|" ;
        std::cout << std::endl;
        i++;
    }
    std::cout << std::endl;
}


