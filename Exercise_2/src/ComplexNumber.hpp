#include <iostream>
#include <cmath>

struct ComplexNumber
{
    int real;
    int imaginary;

    ComplexNumber(int a, int b)
    {
        real = a;
        imaginary = b;
    }

};


std::ostream& operator<<(std::ostream& os, const ComplexNumber& c)
{
    os << std::showpos << c.real << c.imaginary << "i";
    return os;

}

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2)
{
    int real = c1.real + c2.real;

    int imaginary = c1.imaginary + c2.imaginary;

    ComplexNumber c(real, imaginary);

    return c;

}

ComplexNumber conjugate(const ComplexNumber& a)
{
    ComplexNumber c(a.real, -a.imaginary);
    return c;
}


operator==(const ComplexNumber& c1, const ComplexNumber& c2)
{

    if (c1.real == c2.real && c1.imaginary == c2.imaginary)
        return 1;
    else
        return 0;

}



