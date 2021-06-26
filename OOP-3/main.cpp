#include <iostream>
#include <string>


class Student {

    private:
        std::string _login;

    public:
        Student(std::string login) : _login(login)
        {
            std::cout << "Student " << this->_login << " is born" << std::endl;
        }
        ~Student()
        {
            std::cout << "Student " << this->_login << " died" << std::endl;
        }

};

class Student1 {
    private:
        std::string _login;
    
    public:
        Student1() : _login("ldefault")
        {
            std::cout << "Student " << this->_login << " is born" << std::endl;
        }
        ~Student1()
        {
            std::cout << "Student " << this->_login << " died" << std::endl;
        }
};

int main()
{
    //allocate the first student on the stack
    // automatically deallocate it  when the stack is clean up
    Student     bob=Student("bfubar");

    //allocate the student in a dynamic way // use new keyword to allocate it 
    // it will allocate memory dynamically using maloc bracket in practice
    // we cal the constructur of student to initialize it correctly
    // it will return a pointer to the instance i'm getting
    Student*    jim = new Student("jfubar");

    //Do some stuff here

    //deallocate the student jim , not using the free bracket , but using delete
    // don't try to free something that is allocated with new using free bracket.
    // or don't try to  allocate with malloc and destroy with delete .

    delete jim; // jim is destroyed

    std::cout << "-----------------------------------" << std::endl;
    // it will allocate 42 continuous students in memory for me
    // then it will call the constructor of each one of this students
    Student1 *students = new Student1[42];

    //Do some stuff here
    
    //deallocate all the students together
    delete [] students;

    return(0); // bob is destroyed
    // when i exit my main function the student bob is destroyed 
}