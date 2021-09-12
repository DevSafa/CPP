#include <iostream>
#include <iomanip>
#include <cctype>
#include <algorithm>

#include "data.hpp"

int main(int argc , char **argv){

    if (argc != 2)
    {
        std::cout << "Invalid number of arguments "<< std::endl;
        return 0;
    }
    std::string argument = static_cast<std::string>(argv[1]);

    Data data(argument);
    data.setType();
    if(data.getType().compare("int") == 0)
        data.convertInt();
   else  if(data.getType().compare("float") == 0)
        data.convertFloat();
    else if(data.getType().compare("char") == 0)
        data.convertChar();
    else if(data.getType().compare("double") == 0)
        data.convertDouble();
    else if(data.getType().compare("INVALID") == 0)
        std::cout << "String data type" << std::endl;

} 

















// int ft_count(std::string element , char c)
// {
//     int count = 0;

//     for(unsigned long i = 0; i < element.length() ; i++)
//     {
//         if(element[i] == c)
//             count++;
//     }
//     return count;
// }
// std::string getType(std::string & argument)
// {
//     int sign = 1;
//     //check character or number 0 - 9
//     if(argument.length() == 1)
//     {
//          if(isdigit(argument[0]))
//             return "int";
//         return "char";
//     }
//     //check float
//     else if(argument[0] == '-')
//     {
//         sign = - 1;
//         argument = argument.substr(1,argument.length() - 1);
//        // std::cout << "argument : " << argument << std::endl;
//     }
//     if(argument.length() > 3 && argument[argument.length() - 1] =='f' 
//                 && ft_count(argument,'.') == 1)
//     {
//         for(unsigned long i = 0; i < argument.length() ; i++)
//         {
//             if(argument[0] == '.')
//                 break;
//             if(i != argument.length() - 1 && !isdigit(argument[i]) && argument[i] != '.' )
//             {
//                 return "INVALID";
//             }
//         }
//         return "float";
//     }

//     //check double
//     else if(argument.length() > 2 && ft_count(argument,'.') == 1)
//     {
       
//         for(unsigned long i = 0; i < argument.length() ; i++)
//         {
//             if(argument[0] == '.')
//                 break;
//             if(!isdigit(argument[i]) && argument[i] != '.')
//                 return "INVALID";
//         }
//         return "double";
//     }

//     //check int
//     for(unsigned long i = 0; i < argument.length() ; i++)
//     {
//         if(!isdigit(argument[i]))
//             return "INVALID";
//     }
//     return "int";

// }
// int main(int argc , char **argv)
// {

//     if (argc != 2)
//     {
//         std::cout << "Invalid number of arguments "<< std::endl;
//         return 0;
//     }
//     std::string element = static_cast<std::string>(argv[1]);
//     std::string type = getType(element);
//     std::cout << "type : " << type << std::endl;
//     std::cout << "argument : " << element << std::endl;

  
// }

/* fixed */

/*
Use fixed floating-point notation
Sets the floatfield format flag for the str stream to fixed.

When floatfield is set to fixed, floating-point values are written using fixed-point notation: the value is represented with 
exactly as many digits in the decimal part as specified by the precision field (precision) and with no exponent part.

For neat output of doubles, the fixed format is most useful. (You can also select a scientific notation format.) In fixed format,
the precision specifies the number of digits to the right of the decimal point, and a precision of zero means zero places to the
right of the decimal point (i.e. round to the nearest unit).

you can select the fixed format with a simple manipulator:
cout << fixed;

*/