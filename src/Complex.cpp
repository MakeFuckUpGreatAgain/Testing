#include "Complex.h"
#include <iostream>

Complex::Complex()
{
    real=0;
    imaginary=0;
    //ctor
}
Complex::Complex(double R, double I)
{
    real=R;
    imaginary=I;
}

Complex Complex::operator +(Complex &A)
{
    return Complex (this->real+A.real,this->imaginary+ A.imaginary);
    //return A;
}

Complex Complex::operator -(Complex &A)
{
    return Complex (this->real-A.real,this->imaginary-A.imaginary);
    //return A;
}

Complex::~Complex()
{
    //dtor
}
