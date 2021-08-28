/*
 c supports two casts 
    - the implicit cast 
    -the cast when we use the parentheses before type . explicit cast
*/

int main(void)
{
   
    int a = 42 ; /*reference value for this example  */

    //the double type is the double precision floating type
    //representing in 64 bit , it's a biger type more precise
    //than the integer type.
    // int a is representing on 32 bit .
    //that's why all variables that able to fit in integer will
    //be a ble to fit in a double without any probleme
    //that's why is possible in c to write this line.
    //it's implicit cast because the compiler will cast for you.
    double b = a; /*implicit conversion cast */

    //using the c cast notion
    double c = (double)a; /*explicit conversion cast */

    /*
    la notion de transformer le codage d'un octet vers un autre
    codage pour garder la meme valeur s'appelle une conversion : conversion c'est le premier type de cast
    il est possible de faire des conversion implicit et explicit on utulisant la notion de cast qu'on sait en c .
    -le type entier est plus petit que double , il est aussi moins signifie
    */

    //------------------------------------------

    double d = a ; /* Implicit promotion ->ok */
    //losing information
    //this line will not compile in a  newer gcc compilater 
    /* partir d'un type plus precis pour convertir la valeur vers un type moins precis ,
    ca peut poser des problemes , tout simplement on peut avoir de la perte de precision
    */
    int e = d ; /*implicit demotion -> harzardous ! */
    //use explicit cast for good practice
    //you're telling your compiler , that you're perfectly aware
    //of making this transformation and loses accuracy
    //utiliser un cast explicit pour perdre de precision
    //vous dites au compilater vous etes conscient de ce cast 
    int f = (int) d; /*implicit demotion -> OK :you're in charge */

   
}

/*

    nous avons donc decouvert que les cast nous permettre de convertir
    des types vers d'autre types et pour cela on a un rearangement des bits pour pouvoir correspond au nouveau type~
*/