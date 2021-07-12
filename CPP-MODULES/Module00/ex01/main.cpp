
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
		std::cout << BOLDBLUE << "ENTER A COMMAND (ADD - SEARCH - EXIT) : " << "\033[0m" << std::endl;
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
				std::cout <<  BOLDBLUE << "Enter an index : " << "\033[0m" << std::endl ;
				if(!(std::cin >> index))
				{
					/*
						The cin. clear() clears the error flag on cin 
						(so that future I/O operations will work correctly)
					*/
					std::cin.clear();
					std::cout << BOLDYELLOW << "Invalid index!!!" << "\033[0m" <<std::endl;
				}
				else
					phoneBook.getDataByIndex(index);
					/*
						to clear the input buffer 
						it ignores the amount of characters you specify when you call it, up to the char 
						you specify as a breakpoint
					*/
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


/*
	The cin. ignore() function is used which is used to ignore or clear one or more characters from 
	the input buffer. ... For example, after entering into the cin statement, we need to input a 
	character array or string. So we need to clear the input buffer, otherwise it will occupy 
	the buffer of previous variable.

	It doesn't "throw away" something you don't need instead, it ignores the amount of characters 
	you specify when you call it, up to the char you specify as a breakpoint.

	The cin. clear() clears the error flag on cin 
	(so that future I/O operations will work correctly), 
	and then cin. ignore(10000, '\n') skips to the next newline 
	(to ignore anything else on the same line as the non-number so 
	that it does not cause another parse failure)
*/