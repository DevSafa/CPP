#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "Contact.hpp"

class PhoneBook{
    public:
        PhoneBook( void );
        ~PhoneBook( void );
        void addContact(Contact contact);
        int   getnbrContacts( void );
        Contact *getContacts( void );
        void  displayContacts( void );
        void getDataByIndex(int index);
    private:
        Contact _contacts[8];
        int _nbrContacts;
};

#endif