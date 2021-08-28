#ifndef DATA_HPP
# define DATA_HPP

#include <string>
#include <iostream>
class Data {
    private :
        std::string argument;
        std::string sub_arg;
        std::string type;
        int sign;
        Data(void);
        Data(Data & src);
        Data & operator = (Data const  & src);
    public :
       
        Data(std::string const & argument);
        
        ~Data(void);
        

        std::string const  & getArgument() const;
        std::string const & getSub_arg() const;
        std::string const & getType() const;
        int const &getSign() const;
        void convertChar(void);
        void convertInt(void);
        void convertFloat(void);
        void convertDouble(void);

        void setType(void);
        int ft_count(char c);

};


#endif