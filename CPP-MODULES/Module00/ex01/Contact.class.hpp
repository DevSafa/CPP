#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>
#include <iostream>
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