#include <iostream>
#include <fstream>
#include <string>

int main(int argc , char *argv[])
{
    /* test number of arguments */
    if(argc != 4)
    {
        std::cout << "Invalid number of arguments!!!" << std::endl;
        return 0;
    }
    std::ifstream my_input_file(argv[1]);

    /* test if the file failed to open because of bad permisison , doesn't exist */
    if (my_input_file.fail())
    {
        std::cout << "input file Error!!!" << std::endl;
        return 0;
    }

    /* test if the file is empty  */
    if(my_input_file.peek() == std::ifstream::traits_type::eof())
    {
        std::cout << "file is empty!!!" << std::endl;
        return 0;
    }
    //check if s1 and s2 are empty
    std::string  s1 = argv[2];
    std::string  s2 = argv[3];
    if(s1.empty() || s2.empty())
    {
        std::cout << "use of empty string!!!" << std::endl;
        return 0;
    }
    std::string  extension = ".replace"; 
    std::string out = argv[1] + extension;
    std::ofstream my_output_file(out);

    /*failed to open output file */
    if(my_output_file.fail())
    {
        std::cout << "output file error!!!" << std::endl;
        return 0;
    }
   
    std::string my_string;
    unsigned long index;
    
    while(getline(my_input_file,my_string)){
        index = my_string.find(s1);
        while(index != std::string::npos)
        {
            my_string  = my_string.substr(0,index) +s2+
            my_string.substr(index +s1.length(),my_string.length() - index +s1.length() + 1);
            index = my_string.find(s1,index + s2.length());
        }
        my_output_file << my_string << std::endl;
    }
    
    my_output_file.close();
}

/*
    The function peek() is used with input streams, and returns the next character in the stream 
    or EOF if the end of file is read. peek() does not remove the character from the stream.

    npos is a static member constant value
    This constant is defined with a value of -1

*/