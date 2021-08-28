#include "data.hpp"
#include <cmath>
Data::Data(std::string const & argument){
    this->argument = argument;
    sub_arg = argument;
    sign = +1;

    //std::cout << "address of argument : "<< &argument << std::endl;
    //std::cout << "address of sub arg : "<< &sub_arg << std::endl;

}

Data::~Data(void){

}

std::string const & Data::getArgument() const{
    return this->argument;
}

std::string const & Data::getSub_arg() const{
    return this->sub_arg;
}
std::string const & Data::getType() const{
    return this->type;
}

int const & Data::getSign() const {
    return this->sign;
}

void Data::convertChar(void){
  
}
void Data::convertInt(void){
  
    try{
        int nbr = std::stoi(sub_arg) * sign;
        if(nbr > 32 && nbr < 127)
            std::cout << "char : " << static_cast<char>(nbr) << std::endl;
        else 
            std::cout << "char : "  << "Non displayable" << std::endl;
        std::cout << "int : " << nbr  << std::endl;
        std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(nbr) << "f" << std::endl;
        std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(nbr) << std::endl;
    }
    catch(std::out_of_range &e)
    {
        
        std::cout << "char : " << "impossible" << std::endl;
        std::cout << "int : " << "impossible" << std::endl;
        std::cout << "float : " << "nanf" << std::endl;
        std::cout << "double : " << "nan" << std::endl;
    }
    
}
void Data::convertFloat(void){
    try
    {
        float nbr ;
        nbr = std::stof(sub_arg.substr(0,sub_arg.length() - 1)) * sign;
        if(nbr > 32 && nbr < 127)
            std::cout << "char : " << static_cast<char>(nbr) << std::endl;
        std::cout << "int : "<< static_cast<int>(nbr) << std::endl;
        std::cout << "float : " << std::fixed  << std::setprecision(1) << nbr << "f" << std::endl;
        std::cout << "double : " << static_cast<double>(nbr) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "char : " << "impossible" << std::endl;
        std::cout << "int : " << "impossible" << std::endl;
        std::cout << "float : " << "nanf" << std::endl;
        std::cout << "double : " << "nan" << std::endl;
    }
    
    
    //std::cout << nbr << "f" << std::endl;
}
void Data::convertDouble(void){
    
}

int Data::ft_count(char c)
{
    int count = 0;

    for(unsigned long i = 0; i < this->sub_arg.length() ; i++)
    {
        if(this->sub_arg[i] == c)
        count++;
    }
    return count;
}

void Data::setType()
{
   if(this->argument.length() == 1)
   {
        if(isdigit(argument[0]))
            this->type = "int";
        else
            this->type = "char";
        return;
   }    
   if(argument[0] == '-'){
       this->sign = -1;
       this->sub_arg = argument.substr(1, argument.length() - 1);
   }
   else if (argument[0] == '+')
   {
       this->sign = 1;
       this->sub_arg = argument.substr(1, argument.length() - 1);
   }
   if(sub_arg.length() > 3 && sub_arg[sub_arg.length() - 1] == 'f'
        && ft_count('.') == 1)
    {
        for(unsigned long i = 0; i < sub_arg.length() ; i++)
        {
           
            if(sub_arg[0] == '.')
                break;
            if(i != sub_arg.length() - 1 && !isdigit(sub_arg[i]) && sub_arg[i] != '.' )
            {
                
                this->type ="INVALID" ;
                return;
            }
        }
       
        this->type ="float";
        return;
    }

    else if(sub_arg.length() > 2 && ft_count('.') == 1)
    {
       
        for(unsigned long i = 0; i < sub_arg.length() ; i++)
        {
            if(sub_arg[0] == '.')
                break;
            if(!isdigit(sub_arg[i]) && sub_arg[i] != '.')
            {
                type = "INVALID";
                return;
            }
        }
        type = "double";
        return;
    }

    for(unsigned long i = 0; i < sub_arg.length() ; i++)
    {
        if(!isdigit(sub_arg[i]))
        {
            type = "INVALID";
            return;
        }
    }
    type = "int";
}

