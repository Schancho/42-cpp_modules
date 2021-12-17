#include <iostream>

#include "Fixed.hpp"

// int main( void ) {
//     Fixed a;
//     Fixed  b( 10 );
//     Fixed const c( 2.42f );
//     Fixed const d( b );
//     std::cout << "here" << std::endl;
//     a = Fixed( 12.4321f );
//     ++a;
//     a--;
//     b++;
//     if (a > c)
//         std::cout << "a * c is " << a << std::endl;
//         ++a;
//         std::cout << "a * c is " << a << std::endl;
//         a--;
//         std::cout << "a * c is " << a << std::endl;
//     std::cout << "b is " << b << std::endl;
//     std::cout << "c is " << c << std::endl;
//     std::cout << "d is " << d << std::endl;
//     std::cout << "a is " << a.toInt() << " as integer" << std::endl;
//     std::cout << "b is " << b.toInt() << " as integer" << std::endl;
//     std::cout << "c is " << c.toInt() << " as integer" << std::endl;
//     std::cout << "d is " << d.toInt() << " as integer" << std::endl;
//     return 0;
// }

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
//std::cout << roundf(3.49999) << std::endl;
return 0;
}