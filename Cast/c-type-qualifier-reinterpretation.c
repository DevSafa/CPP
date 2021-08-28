/*
  conversions were cast actions,
  we saw a particular case of conversion , 
  identity conversion which is a second cast action.
  we will discover a third cast wich is a particular
  case of reinterpretation , which means that there is no bit transformation
  the bit remain the same , the type qualifier cast
  
  const keyword
*/

int main()
{
    int a = 42 ; /* reference value */

    //the pointer integer must be constant
    //l'addresse entier constant doit etre plus general plus haute d'un entier
    //qui est plus base , plus precise
    int const * b = &a; /* implicit type qualifier cast */
    int const * c = (int const *) &a; /* explicit type qualifier cast */

    int const *d = &a; /*implicit promotion -> ok */
    //the compiler will refuse that
    //retourner d'une addresse constant (general) vers une addresse non constant
    //le compilateur va refuser de faire ctte reinterpretation
    int *e = d; /*implicit demotion -> hell no ! */

    //returning the address of constant type into the address of no constant one
    //we have to use explicit cast
    int *f = (int *)d; /*explicit demotion -> ok i obbey */

    return 0;
}