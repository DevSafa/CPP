#include "whatever.hpp"

int main(){
      int a = 2;
      int b = 3;
      swap( a, b );
      std::cout << "a = " << a << ", b = " << b << std::endl;
      std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
      std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
      std::string c = "chaine1";
      std::string d = "chaine2";
      
      swap(c, d);
      std::cout << "c = " << c << ", d = " << d << std::endl;
      std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
      std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl; 


      std::cout << "--------------------" << std::endl;

      float af = 2.3f;
      float bf = 3.3f;

      std::cout << "af : " << af << std::endl;
      std::cout << "bf : " << bf << std::endl;

      swap(af, bf);

      std::cout << "af : " << af << std::endl;
      std::cout << "bf : " << bf << std::endl;

      std::cout << "min( af, bf ) = " << min( af, bf ) << std::endl;
      std::cout << "min( af, bf ) = " << max( af, bf ) << std::endl;

      std::cout << "--------------------" << std::endl;

      char ac = 'a' ;
      char bc = 'b';

      std::cout << "ac : " << ac << std::endl;
      std::cout << "bc : " << bc << std::endl;
      swap(ac, bc);

      std::cout << "ac : " << ac << std::endl;
      std::cout << "bc : " << bc << std::endl;

      std::cout << "min( ac, bc ) = " << min( ac, bc ) << std::endl;
      std::cout << "min( ac, bc ) = " << max( ac, bc ) << std::endl;

      std::cout << "--------------------" << std::endl;
      int  aa = 13;
      int bb = 13;

      swap(aa, bb);
      std::cout << "aa = " << aa << ", bb = " << bb << std::endl;
     
      std::cout << "address of aa :" << &aa << std::endl;
      std::cout << "address of bb :" << &bb << std::endl;

      int &  max = ::min( aa, bb ) ;

      std::cout << "address of min :" << &max << std::endl;
  
      // std::cout << "--------------------" << std::endl;

      // int a1 = -15;
      // int a2 = -14;
      // Awesome awesome1(a1);
      // Awesome awesome2(a2);
      // std::cout << "awesome1 : " << awesome1.getAwesome() << std::endl;
      // std::cout << "awesome2 : " << awesome2.getAwesome()  << std::endl;
      
      // swap(awesome1,awesome2);
      // std::cout << std::endl;
      // std::cout << "awesome1 : " << awesome1.getAwesome() << std::endl;
      // std::cout << "awesome2 : " << awesome2.getAwesome()  << std::endl;

      // std::cout << "min( awesome1, awesome2 ) = " << ::min( awesome1, awesome2 ).getAwesome() << std::endl;
      // std::cout << "max( awesome1, awesome2 ) = " << ::max( awesome1, awesome2 ).getAwesome() << std::endl;


      // Awesome awesome3(13);
      // Awesome awesome4(13);

      // std::cout << "max( awesome3, awesome4 ) = " << ::max( awesome3, awesome4 ).getAwesome() << std::endl;

      // std::cout << "--------------------" << std::endl;

    return 0;
}