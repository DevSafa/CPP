#ifndef CONTACT_H
# define CONTACT_H
#define BOLDWHITE   "\033[1m\033[37m" 
#define BOLDGREEN   "\033[1m\033[32m" 
#define BOLDRED     "\033[1m\033[31m"
#define BOLDYELLOW  "\033[1m\033[33m"
#include <string>
#include <iostream>
#include <iomanip>

class Contact{

    public:
        Contact( void );
        ~Contact( void );
        void setFirstName(std::string first_name);
        void setLastName(std::string last_name);
        void setNickname(std::string nickname);
        void setPhoneNumber(std::string phoneNumber);
        void setDarkestSecret(std::string darkest_Secret);
        std::string  getFirstName() const;
        std::string  getLastName() const;
        std::string  getNickName() const;
        std::string  getPhoneNumber() const;
        std::string  getDarkestSecret() const;
        static int getNbrContacts();
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
        static int _nbrContacts;
};

#endif