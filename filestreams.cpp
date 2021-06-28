//we already learn about streams to handle the standard output and input and
//the error output.
//there are streams to interact with files

#include <iostream>
#include <fstream>

int main()
{
    //create an ifstream that i called ifs
    //ifstream stands for input file stream
    // create an input filestream , that i will called ifs , 
    //and passed "numbers" as parameter.
    //that's mean i will create an input stream then open the numbers file and linked to the stream
    std::ifstream  ifs("numbers");
    unsigned int    dst;
    unsigned int    dst2;
    // i read two integers for the test
    // i will read from input file stream dst and dst2
    ifs >> dst >> dst2;

    std::cout << dst << " " << dst2 << std::endl;

    //close my stream to close the file
    ifs.close();

    //-------------------

    std::ofstream ofs("test.out");

    ofs << "i like ponies a whole damn lot" << std::endl;
    ofs.close();
}