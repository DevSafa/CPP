#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
#include "Contact.class.hpp"
#include <iostream>
class PhoneBook{
    public:
        PhoneBook( void );
        ~PhoneBook( void );
        void add_contact(Contact contact);
        Contact *get_Contact(int index);
        void  display_contacts( void );
        Contact *getContacts( void );
        int   get_limit( void );
    private:
        Contact _contacts[8];
        int _limit;
};

#endif