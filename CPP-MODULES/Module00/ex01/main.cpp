#include <iostream>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"
#include <string>
int main()
{
    int exit;
    std::string command;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phoneNumber;
    std::string darkest_secret;

    PhoneBook phoneBook;

    exit = 1;
    while(exit == 1)
    {
       
        std::cout << "Enter a command (ADD - SEARCH - EXIT) : " << std::endl;
        std::cin >> command;

        if(command.compare("ADD") == 0)
        {
            Contact contact;
            std::cout << "First Name : ";
            std::cin >> first_name;
            std::cout << std::endl;
            contact.setFirstName(first_name);

            std::cout << "Last Name : ";
            std::cin >> last_name;
            std::cout << std::endl;
            contact.setLastName(last_name);

            std::cout << "Nickname : ";
            std::cin >> nickname;
            std::cout << std::endl;
            contact.setNickname(nickname);

            std::cout << "Phone Number : ";
            std::cin >> phoneNumber;
            std::cout << std::endl;
            contact.setPhoneNumber(phoneNumber);

            std::cout << "Darkest_Secret : ";
            std::cin >> darkest_secret;
            std::cout << std::endl;
            contact.setDarkestSecret(darkest_secret);

            phoneBook.add_contact(contact);
        }
        else if (command.compare("SEARCH") == 0)
        {
            phoneBook.display_contacts();
        }
        else if (command.compare("EXIT") == 0)
            exit = 0;
    }
   

    
    return 0; 
}