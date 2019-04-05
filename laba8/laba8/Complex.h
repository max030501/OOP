#pragma once
#include<iostream>
#include<string>
using namespace std;

class Comp {
public:
	float im, re, abs, arg;
	Comp() {
		im = 0;
		re = 0;
		abs = 0;
		arg = 0;
	}
	friend ostream& operator<<(ostream& out, Comp &c) {
		out << "The module of complex number is " << c.abs << endl;
		out << "The argumebt of complex number is " << c.arg << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Comp &c) {
		cout << "Enter the real axis of number: ";
		in >> c.re;
		cout << "Enter the imaginary axis of number: ";
		in >> c.im;
		c.abs = sqrt(c.re*c.re + c.im * c.im);
		c.arg = atan(c.im / c.re);
		return in;
	}
	Comp& operator=(Comp& c1) {
		if (this == &c1)
			return *this;
		re = c1.re;
		im = c1.im;
		abs = c1.abs;
		arg = c1.arg;
		return *this;
	}
};