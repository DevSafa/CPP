/*
    il existe un type de conversion qui est particulier et tres interessant ,
    c'est le cas ou la conversione est dites identitien ; la valeur de base apres conversion garde les memes bits
    dans le meme ordre , il n'ya pas eu reelement de conversion pendant le cast

    ce genre de conversion ; conversion identitien s'appelle une reienterpretation

    there is a particular type of conversion which is very interesting
    in which we have an identity cast ; what i mean is that the base value  keep the same bit after conversion in the same order,
    this particular type of conversion is called reinterpretation.
    reinterpretation is the second cast effecct after type conversion

*/
#include <stdio.h>

int main()
{
    //a is a float type have the value of 420.042 approximaly
    // we will manipulate this vlue using addresses to highlight the nootion of interpretation
    //420.041992 the closest representation of the float
    float a = 420.042f; /*reference value */

    //a particular address type , the void type will allow us 
    //to store an address of any type , the void type is more generic than all the address type

    void *b = &a ; /*implicit reinterpretation cast */
    //lost the accuracy but getting generausity
    void *c = (void *) &a; /* explicit reinterpretation cast */

    //moving from more accurate address to more generic one
    //there is no probleme since we're moving to more generic type
    void *d = &a; /*implicit promotion -> ok */
    //compilation error 
    //cast a more generic type
    //losing precision floating to int
    //int * e = d;  /*Implicit demotion -> Hazardeous ! */
    int *f = (int *) d; /* Explicit demotion -> OK , I obey */

    printf("%p, %f\n",&a, a);
    printf("%p\n",b);
    printf("%p\n",c);

    printf("%p\n",d);
    printf("%p, %d\n",f,*f);

    //when we take the bit of the floating value 420.041992 and we 
    //reinterpret them directly without  conversion as an integer value
    //we get an integer value which actually ahs nothing to do with the previous floating value
}