#ifndef complex_h
#define complex_h

#include <iostream>
#include <cmath>

using namespace std;

struct Complex {
private:
    double re, im;
public:
    void init(double r, double i);

    void add(Complex c1, Complex c2);

    void subtract(Complex c1, Complex c2);

    void multiply(Complex c1, Complex c2);

    void divide(Complex c1, Complex c2);

    void output();
};

#endif // complex_h
