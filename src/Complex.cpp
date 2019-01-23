/*
testing of git and github function with complex numbers
*/


#include "Complex.h"
#include <math.h>
#include <string>

Complex::Complex()
    :real(0), imaginary(0)
{
}
Complex::Complex(double R, double I)
    : real(R), imaginary(I)
{
}

Complex Complex::operator +(Complex &A)
{
    return Complex (this->real+A.real,this->imaginary+ A.imaginary);
}
Complex Complex::operator/(double A)
{
    return Complex(this->real/A,this->imaginary/A);
}
/*
<<<<<<< HEAD
Complex Complex::operator/(Complex &B)
{
    double mianownik(B.real*B.real+B.imaginary*B.imaginary);
    return Complex ((B.real*this->real+B.imaginary*this->imaginary)/mianownik,
        (this->imaginary*B.real-this->real*B.imaginary)/mianownik);
}
=======
*/
Complex Complex::operator/(Complex &A)
{
    double mianownik(A.real*A.real+A.imaginary*A.imaginary);
    return Complex ((A.real*this->real+A.imaginary*this->imaginary)/mianownik,
        (this->imaginary*A.real-this->real*A.imaginary)/mianownik);
}

//>>>>>>> testing
Complex Complex::operator -(Complex &A)
{
    return Complex (this->real-A.real,this->imaginary-A.imaginary);
}

double Complex::module()
{
    return sqrt(this->imaginary*this->imaginary+this->real*this->real);
}

double Complex::phase()
{
    if (this->real==0)
        if (this->imaginary!=0)
            return 3,14;
        else
        {
            throw char('0');
            return 0;
        }
    return atan(this->imaginary/this->real);
}
double Complex::Real()
{
    return this->real;
}

Complex::~Complex()
{
    //dtor
}
