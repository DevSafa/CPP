#include "Intern.hpp"

Intern::Intern(void){
        this->forms[0].p = &Intern::shrubbery;
        this->forms[0].name = "shrubbery create";

        this->forms[1].p = &Intern::robotomly;
        this->forms[1].name = "robotomy request";

        this->forms[2].p = &Intern::presidential;
        this->forms[2].name = "presidential pardon";

       
}

Intern::~Intern(void){

}

Form *Intern::shrubbery(std::string & target){
    return new ShrubberyCreationForm(target);
}

Form *Intern::robotomly(std::string & target){
    return new RobotomyRequestForm(target);
}

Form *Intern::presidential(std::string & target){
    return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string   name , std::string  targetForm){

    for(int i = 0 ; i < 3 ; i++)
    {

        if(name.compare(this->forms[i].name) == 0)
        {

            std::cout << "Intern creates " << name << std::endl;
            return (this->*forms[i].p)(targetForm);
        }
    }
    std::cout << "Unknown type of form" << std::endl;
    return NULL;
}