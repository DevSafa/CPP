#include <iostream>
#include <stdio.h>
typedef struct Data {

    int   nbr_letters;
    char   first_letter;
    char  last_letter ;      

}   data;


uintptr_t serialize(Data *ptr){
    return reinterpret_cast<uintptr_t >(ptr);
}

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data* >(raw);
}

int main()
{
    Data *data = new Data();
    data->first_letter ='s';
    data->last_letter ='a';
    data->nbr_letters = 10;


    uintptr_t uptr = serialize(data);

    //display data after serialize
    int nbr_letters = *(reinterpret_cast<int *>(uptr));
    std::cout << "nbr of letters : " << nbr_letters << std::endl;
   

    char first_letter =  *(reinterpret_cast<char *>(uptr) + 4);
    std::cout << "first letter : " << first_letter << std::endl;

    char last_letter =  *(reinterpret_cast<char *>(uptr) + 5);
    std::cout << "last letter : " << last_letter << std::endl;


    std::cout << "-----------------------------" << std::endl;

    Data *ret = deserialize(uptr);
    std::cout << "nbr of letters : " << ret->nbr_letters << std::endl;
    std::cout << "first letter : " << ret->first_letter << std::endl;
    std::cout << "last letter : " << ret->last_letter << std::endl;

}