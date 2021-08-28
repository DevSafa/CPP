#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    //------------------ Test Shrubbery Creation Form  ----------------
    std::cout << "1=====================" << std::endl;

    ShrubberyCreationForm shrubberyCreationForm1("garden");

    std::cout << shrubberyCreationForm1;

    std::cout << "target is : "<< shrubberyCreationForm1.getTarget() << std::endl;

    std::cout << "2=====================" << std::endl;

    ShrubberyCreationForm shrubberyCreationForm2("school");

    std::cout << shrubberyCreationForm2;

    std::cout << "target is : "<< shrubberyCreationForm2.getTarget() << std::endl;

    std::cout << "3=====================" << std::endl;

    shrubberyCreationForm2 = shrubberyCreationForm1;

    std::cout << shrubberyCreationForm2;

    std::cout << "target is : "<< shrubberyCreationForm2.getTarget() << std::endl;

    std::cout << "4=====================" << std::endl;

    ShrubberyCreationForm *shrubberyCreationForm3 = new ShrubberyCreationForm("home");

    std::cout << *shrubberyCreationForm3;

    std::cout << "target is : "<< shrubberyCreationForm3->getTarget() << std::endl;
    delete shrubberyCreationForm3;

    std::cout << "5=====================" << std::endl;
    //test executing a Form that is not signed
    try{
        ShrubberyCreationForm shrubberyCreationForm1("home");
        Bureaucrat bureaucrat1("b1",100);
        shrubberyCreationForm1.execute(bureaucrat1);
    }catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "6=====================" << std::endl;

    //signing the form with a  low grade 
    try{
        ShrubberyCreationForm shrubberyCreationForm1("home");
        Bureaucrat bureaucrat1("b1",150);
        shrubberyCreationForm1.beSigned(bureaucrat1);
        shrubberyCreationForm1.execute(bureaucrat1);
    }catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "7=====================" << std::endl;
     
    //no execption is thrown , signing grade is ok => form is signed 
    try{
        ShrubberyCreationForm shrubberyCreationForm1("home");
        Bureaucrat bureaucrat1("b1",3);
        shrubberyCreationForm1.beSigned(bureaucrat1);
        shrubberyCreationForm1.execute(bureaucrat1);
    }catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "8=====================" << std::endl;
    //executing the form with a low grade
    try{
        ShrubberyCreationForm shrubberyCreationForm1("home");
        Bureaucrat bureaucrat1("b1",3);
        shrubberyCreationForm1.beSigned(bureaucrat1);
        Bureaucrat bureaucrat2("b1",138);
        shrubberyCreationForm1.execute(bureaucrat2);
    }catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

     std::cout << "9=====================" << std::endl;
    try{
        ShrubberyCreationForm shrubberyCreationForm1("street");
        Bureaucrat bureaucrat1("b1",3);
        shrubberyCreationForm1.beSigned(bureaucrat1);
        Bureaucrat bureaucrat2("b1",137);
        shrubberyCreationForm1.execute(bureaucrat2);
    }catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

     std::cout << "10=====================" << std::endl;
     //------------------------- Test Robotomy Request Form ------------------------------------
    try{
        RobotomyRequestForm robotomyRequestForm1("home");
        Bureaucrat bureaucrat1("b1",100);
        robotomyRequestForm1.beSigned(bureaucrat1);
        robotomyRequestForm1.execute(bureaucrat1);
    }catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "11=====================" << std::endl;
    try{
        RobotomyRequestForm robotomyRequestForm1("home");
        Bureaucrat bureaucrat1("b1",50);
        robotomyRequestForm1.beSigned(bureaucrat1);
        robotomyRequestForm1.execute(bureaucrat1);
    }catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "12=====================" << std::endl;
    try{
        RobotomyRequestForm robotomyRequestForm1("home");
        Bureaucrat bureaucrat1("b1",4);
        robotomyRequestForm1.beSigned(bureaucrat1);
        robotomyRequestForm1.execute(bureaucrat1);
    }catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

      std::cout << "13=====================" << std::endl;
     //------------------------- Test Presidential Pardon Form ------------------------------------
    try{
        PresidentialPardonForm presidentialPardonForm1("home");
        Bureaucrat bureaucrat1("b1",3);
        presidentialPardonForm1.beSigned(bureaucrat1);
        presidentialPardonForm1.execute(bureaucrat1);
    }catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "13=====================" << std::endl;
    try{
      ShrubberyCreationForm shrubberyCreationForm("here");
      Bureaucrat bureaucrat("b",3);
      bureaucrat.executeForm(shrubberyCreationForm);
      std::cout << "----------" << std::endl;
    }catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "13=====================" << std::endl;
    try{
      RobotomyRequestForm robotomyRequestForm("here");
      Bureaucrat bureaucrat("b",143);
      bureaucrat.signForm(robotomyRequestForm);
      bureaucrat.executeForm(robotomyRequestForm);
      std::cout << "----------" << std::endl;
    }catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    
}