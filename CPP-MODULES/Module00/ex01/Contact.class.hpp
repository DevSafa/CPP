#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>
using namespace std;

class Contact{

public:
    Contact( void );
    ~Contact( void );
    void setFirstName(string first_name);
    void setLastName(string last_name);
    void setNickname(string nickname);
    void setPhoneNumber(string phoneNumber);
    void setDarkestSecret(string darkest_Secret);
    string  getFirstName();
    string  getLastName();
    string  getNickName();
    string  getPhoneNumber();
    string  getDarkestSecret();
    static int getNbrContacts();
private:
    string _first_name;
    string _last_name;
    string _nickname;
    string _phone_number;
    string _darkest_secret;
    static int _nbrContacts;


};

#endif