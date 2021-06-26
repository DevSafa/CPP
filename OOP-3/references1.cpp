#include <iostream>

class Student2 {
    private:
        std::string _login;

    public:
        Student2(std::string const & login) : _login(login)
        {
        }
        std::string const & getLoginRefConst() const
        {
            return this->_login;
        }

        std::string*    getLoginPtr()
        {
            return &(this->_login);
        }

        std::string const * getLoginPtrConst() const
        {
            return &(this->_login);
        }
};

int main()
{

    Student2    boby = Student2("bfubar");
    Student2 const   jack = Student2("jfubar");

    std::cout << boby.getLoginRefConst() << " " << jack.getLoginRefConst() << std::endl;

    return(0); // bob is destroyed
    // when i exit my main function the student bob is destroyed 
}