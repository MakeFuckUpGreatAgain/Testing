#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
    public:
        Complex();
        Complex(double R, double I);
        ~Complex();
        double real;
        double imaginary;
        Complex operator +(Complex &A);
        Complex operator -(Complex &A);

    protected:

    private:
};

#endif // COMPLEX_H
