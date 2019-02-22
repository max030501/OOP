#include "complex.h"

void Complex::init(double r, double i) {
    re = r;
    im = i;
}

void Complex::multiply(Complex c1, Complex c2) {
    re = c1.re * c2.re - c1.im * c2.im;
    im = c2.re * c1.im + c1.re * c2.im;
}

void Complex::add(Complex c1, Complex c2) {
    re = c1.re + c2.re;
    im = c1.im + c2.im;
}

void Complex::subtract(Complex c1, Complex c2) {
    re = c1.re - c2.re;
    im = c1.im - c2.im;
}

void Complex::divide(Complex c1, Complex c2) {
    re = (c1.re * c2.re + c1.im * c2.im) / (pow(c2.re, 2) + pow(c2.im, 2));
    im = (c1.im * c2.re - c1.re * c2.im) / (pow(c2.re, 2) + pow(c2.im, 2));
}

void Complex::output() {
    cout << endl << "Полученное комлпексное число: " << "(" << re << ", " << im << ")" << endl;
}
