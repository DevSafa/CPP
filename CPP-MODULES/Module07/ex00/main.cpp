#include "whatever.hpp"

int main(){
    // std::cout << "1------ int ------" << std::endl;
    //     int xi = 3;
    //     int yi = 4 ;
    //     std::cout << "xi = " << xi << std::endl;
    //     std::cout << "yi = " << yi << std::endl;

    //     std::cout << "****************" << std::endl;
    //     swap<int>(xi , yi);

    //     std::cout << "xi = " << xi << std::endl;
    //     std::cout << "yi = " << yi << std::endl;

    // std::cout << "2------ char ------" << std::endl;

    //     char xc = 'a';
    //     char yc = 'b';

    //     std::cout << "xc = " << xc << std::endl;
    //     std::cout << "yc = " << yc << std::endl;

    //     std::cout << "****************" << std::endl;
    //     swap(xc , yc);

    //     std::cout << "xc = " << xc << std::endl;
    //     std::cout << "xc = " << yc << std::endl;

    // std::cout << "3----- float  -------" << std::endl;

    //     float xf = 3.001f;
    //     float yf = 6.85;

    //     std::cout << "xf = " << xf << std::endl;
    //     std::cout << "yf = " << yf << std::endl;

    //     std::cout << "****************" << std::endl;
    //     swap(xf, yf);

    //     std::cout << "xf = " << xf << std::endl;
    //     std::cout << "yf = " << yf << std::endl;

    // std::cout << "4----- double  -------" << std::endl;


    //     double xd = 3.2;
    //     double yd = 6.0;

    //     std::cout << "xd = " << xd << std::endl;
    //     std::cout << "yd = " << yd << std::endl;

    //     swap(xd, yd);

    //     std::cout << "****************" << std::endl;

    //     std::cout << "xd = " << xd << std::endl;
    //     std::cout << "yd = " << yd << std::endl;

    //     std::cout << "+++++++++++++++++++++++++++++" << std::endl;

        // int x = 3;
        // int y = 5;
        // std::cout << max(x,y) << std::endl;

        // x = 4;
        // y = 4;

        // std::cout << max(x,y) << std::endl;

        // y = 20;

        // std::cout << max(x,y) << std::endl;

      int a = 2;
      int b = 3;
      ::swap( a, b );
      std::cout << "a = " << a << ", b = " << b << std::endl;
      std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
      std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
      std::string c = "chaine1";
      std::string d = "chaine2";
      
      ::swap(c, d);
      std::cout << "c = " << c << ", d = " << d << std::endl;
      std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
      std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl; 
    
    return 0;
}