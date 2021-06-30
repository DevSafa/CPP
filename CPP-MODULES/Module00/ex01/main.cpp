
#include "PhoneBook.hpp"

int main()
{
	int			exit;
	std::string	input;
	int			index;
	PhoneBook 	phoneBook;


	exit = 1;
	while(!std::cin.eof() && exit == 1)
	{
		std::cout << BOLDRED << "ENTER A COMMAND (ADD - SEARCH - EXIT) : " << "\033[0m" << std::endl;
		std::getline(std::cin , input) ;
		if(input.compare("ADD") == 0)
		{
			Contact contact;
			std::cout << BOLDGREEN << "First Name       : " << "\033[0m";
			std::getline(std::cin , input);
			contact.setFirstName(input);

			std::cout << BOLDGREEN << "Last Name        : " << "\033[0m";
			std::getline(std::cin , input);
			contact.setLastName(input);

			std::cout << BOLDGREEN << "Nickname         : " << "\033[0m";
			std::getline(std::cin , input);
			contact.setNickname(input);

			std::cout << BOLDGREEN << "Phone Number     : " << "\033[0m";
			std::getline(std::cin , input);
			contact.setPhoneNumber(input);

			std::cout << BOLDGREEN << "Darkest_Secret   : " << "\033[0m";
			std::getline(std::cin , input);
			contact.setDarkestSecret(input);

			phoneBook.addContact(contact);
		}
		else if (input.compare("SEARCH") == 0)
		{
			phoneBook.displayContacts();
			if( phoneBook.getnbrContacts()!= 0)
			{
				std::cout << BOLDRED << "Enter an index : " << "\033[0m" << std::endl ;
				if(!(std::cin >> index))
				{
					std::cin.clear();
					std::cout << BOLDYELLOW << "Invalid index!!!" << "\033[0m" <<std::endl;
				}
				else
					phoneBook.getDataByIndex(index);
				std::cin.ignore(10000, '\n');  
			}
		}
		else if (input.compare("EXIT") == 0)
			exit = 0;
		else if(!std::cin.eof())
			std::cout << BOLDYELLOW << "Invalid command!!!" << "\033[0m" << std::endl;
	}
	return 0; 
}