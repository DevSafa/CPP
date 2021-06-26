//in C we use pointers when we nned it to allocate variable visible out of scope
// when we need to allocate one on the heap and none on the stack, then manipulate it 
//with it's address and so on
//we write many stars and & everywhere it's nice and not very practical

// in c++ we have  as econd concept doing pretty much the same thing references
// they say that references it's just an alias for an existing variable

// reference it's a pointer that is constant and always referenced and never void 
#include <iostream>

void byPtr(std::string* str)
{
    *str += " and ponies";
}

void byConstPtr(std::string const *str)
{
    std::cout << *str << std::endl;
}

// passing a string reference
void byRef(std::string& str)
{
    str += " and ponies";
}
//void byConstRef(const std::string & str)
void byConstRef(std::string const & str)
{
    std::cout << str << std::endl;
}

int main()
{
    int     numberOfBalls = 42;

    int*    ballsPtr = &numberOfBalls;

    //int& means that type is reference to int
    // we assign numberOfBalls to it and not the address of numberOfBalls
    // the reference will be pointing on ballsRef variable

    //from that moment i can't change what my reference is pointing on 
    // that's why we said that reference are somehow a constant  pointers
    // it's always pointing to the same item
    int&    ballsRef = numberOfBalls;
    //we can't write , because we create a reference pointing on nothing, and since is constant 
    //i can't make it pointing to something else later
        //int& ballsRef;
    
    // a reference is like a dereference a pointer (*p) <=> ref
    //ballsRef is like a reference to numberOfBalls
    std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

    //dereference my pointer to access numberOfBalls and assign it 21
    *ballsPtr = 21;
    std::cout << numberOfBalls << std::endl;
    ballsRef = 84 ; // assigning to numberOfBalls using reference
    std::cout << numberOfBalls << std::endl;

    std::cout << "-------------------" << std::endl;

    std::string str = "i like butterflies";

    std::cout << str << std::endl;

    byPtr(&str);
    byConstPtr(&str);

    str = "i like otters";

    std::cout << str << std::endl;
    byRef(str);
    byConstRef(str);


    return(0);
}