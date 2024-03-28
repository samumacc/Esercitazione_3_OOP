//qui definisco tutto
#include <iostream>
#include "ComplexNumber.hpp"

using namespace std;

ostream& operator<<(ostream& os, const ComplexNumber& c)
{
    if(c.imag > 0)
        os << c.real <<"+"<< c.imag <<"i";
    else if(c.imag < 0)
        os << c.real <<"-"<< -(c.imag) <<"i";
    else
        os << c.real;
    return os;
}

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2)
{
    double re = c1.real + c2.real;
    double im = c1.imag + c2.imag;
    ComplexNumber c(re,im);
    return c;
}

ComplexNumber operator-(const ComplexNumber& c1, const ComplexNumber& c2)
{
    double re = c1.real - c2.real;
    double im = c1.imag - c2.imag;
    ComplexNumber c(re,im);
    return c;
}

ComplexNumber coniugate(ComplexNumber c)
{
    double re = c.real;
    double im = -c.imag;
    ComplexNumber h(re,im);
    return h;
}

bool operator==(const ComplexNumber& c1, const ComplexNumber& c2)
{
    if(abs(c1.real-c2.real) < 1e-12 & abs(c1.imag-c2.imag) < 1e-12 )
        //cout << "i due numeri complessi sono uguali" << endl;
        return true;
    else
        //cout << "i due numeri complessi sono diversi";
        return false;
}



