#include "ComplexNumber.hpp"
#include <iostream>

int main()

{
    ComplexNumber c(1,2);
    std::cout << c << std::endl;

    ComplexNumber c1(1,2);
    ComplexNumber c2(2,2);

    ComplexNumber sum = c1 + c2;

    std::cout << sum << std::endl;
    ComplexNumber s = conjugate(c1);
    std::cout << s << std::endl;



    if (c1 == c2)
        std::cout << "true" << std::endl;
    else
        std::cout << "False" << std::endl;

}
