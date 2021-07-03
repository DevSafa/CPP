#include <iostream>
#include <fstream>
#include <string>
int main(int argc , char *argv[])
{
    std::string  extension = ".replace"; 
    std::string out = argv[1] + extension;
    std::ofstream my_output_file(out);
   
    std::ifstream my_input_file(argv[1]);

    std::string my_string;

    std::string  s1 = argv[2];
    std::string  s2 = argv[3];
    int index;
    std::string tmp;
    while(getline(my_input_file,my_string)){
        index = my_string.find(s1);
        while(index != std::string::npos)
        {
            tmp = my_string.substr(0,index) +s2;
            my_string  = my_string.substr(0,index) +s2+
            my_string.substr(index +s1.length(),my_string.length() - index +s1.length() + 1);
            index = my_string.find(s1,index + tmp.length());
        }
        my_output_file << my_string << std::endl;
    }
    // while(getline(my_input_file,my_string)){
    //     index = my_string.find(s1);
    //     if(index != std::string::npos)
    //         my_string  = my_string.substr(0,index) +s2+ my_string.substr(index +s1.length(),my_string.length() - index +s1.length() + 1);
    //     my_output_file << my_string << std::endl;
    // }
}