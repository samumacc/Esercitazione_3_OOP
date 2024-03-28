//qui lo dichiaro solamente
#pragma once

#include <iostream>

using namespace std;

struct ComplexNumber
{
    double real;
    double imag;

    ComplexNumber(int a, int b)
    {
        real = a;
        imag = b;
    }

    ComplexNumber(double a, double b)
    {
        real = a;
        imag = b;
    }
};

ostream& operator<<(ostream& os, const ComplexNumber& c); //ricordare di dichiarare non solo le "operazioni", ma anche la "definizione" stessa di quello che sto creando!

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2);

ComplexNumber operator-(const ComplexNumber& c1, const ComplexNumber& c2);

ComplexNumber coniugate(ComplexNumber c);

bool operator==(const ComplexNumber& c1, const ComplexNumber& c2);


