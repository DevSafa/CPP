#include <iostream>
#include <iomanip>
#include <cctype>
#include <algorithm>

int ft_count(std::string element , char c)
{
    int count = 0;

    for(int i = 0; i < element.length() ; i++)
    {
        if(element[i] == c)
            count++;
    }
    return count;
}
int main(int argc , char **argv)
{

    int is_int = 0;
    int is_double = 0;
    int is_char = 0;
    int is_float = 0;
    int is_string = 0;
    if (argc != 2)
    {
        std::cout << "Invalid number of arguments "<< std::endl;
        return 0;
    }
    //check char
    std::string element = static_cast<std::string>(argv[1]);

    if(element.length() == 1)
    {
        //check if it is a caracter or a number
        if(isdigit(element[0]))
            is_int = 1;
        else
            is_char = 1;
    } 
    //float
    else if(element.length() > 3 && element[element.length() - 1] =='f' 
                && ft_count(element,'.') == 1)
    {
        for(int i = 0; i < element.length() ; i++)
        {
            if(element[0] == '.')
                break;
            if(i != element.length() - 1 && !isdigit(element[i]) && element[i] != '.' )
            {
                is_float = 0;
                break;
            }
            is_float = 1;
        }
    }

    else if(element.length() > 2 && ft_count(element,'.') == 1)
    {
       
        for(int i = 0; i < element.length() ; i++)
        {
            if(element[0] == '.')
                break;
            if(!isdigit(element[i]) && element[i] != '.')
            {
                is_double = 0;
                break;
            }
            is_double = 1;
        }
    }
    
    if(is_double == 0 && is_float == 0 && is_int == 0 && is_char == 0)
    {
        for(int i = 0; i < element.length() ; i++)
        {
            if(!isdigit(element[i]))
            {
                is_int = 0;
                is_string = 1;
                break;
            }
            is_int = 1;
        }
    }
    // else {
    //     for(int i = 0; i < element.length() ; i++)
    //     {
    //         if(!isdigit(element[i]))
    //         {
    //             is_string = 1;
    //             is_int = 0;
    //             break;
    //         }
    //         is_int = 1;
    //     }
    // }

    std::cout << "is_int : " << is_int << std::endl;
    std::cout << "is_char : " << is_char << std::endl;
    std::cout << "is_float : " << is_float << std::endl;
    std::cout << "is_double : " << is_double << std::endl;
    std::cout << "is_string : " << is_string << std::endl;

    // for(int i = 0 ; i < element.length() ; i++)
    // {
    //     if(!isdigit(element[i]))
    //     {
    //         is_int = 0;
    //         break;
    //     }
    // }
    // std::cout << "is digit = " << is_int << std::endl;
    // double x = 1.23;
    // std::cout << x << std::endl;

    // std::cout.precision(5);
   
    // std::cout << x << std::endl;

    // std::cout << "with fixed flag: " << std::fixed << x << std::endl;
    // std::cout << 5.6f << std::endl;
    // std::cout << 4.5 << std::endl;
    // std::cout << "hello" << std::endl;

    // std::cout << "-------------------------" << std::endl;
    // int a = 120;

    // double d = static_cast<double>(a);
    // char c = static_cast<char>(a);

    // std::cout << "int value : "<< a << std::endl;
    // std::cout << "double value :" << std::fixed << std::setprecision(1) << d << std::endl;
    // std::cout << "char value :" << c << std::endl; 

    // std::cout << "--------------------" << std::endl;


}

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