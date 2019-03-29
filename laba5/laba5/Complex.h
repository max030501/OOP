#ifndef complex_h
#define complex_h
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class Complex {
private:
	float re, im;
	float abs, arg;
public:
	Complex() {
		re = 0;
		im = 0;
		abs = 0;
		arg = 0;
	}
	Complex(float re, float im)
	{
		this->re = re;
		this->im = im;
		abs = sqrt(re*re + im * im);
		arg = atan(im / re);
	}
	Complex(const Complex &complex) :
		re(complex.re), im(complex.im), abs(complex.abs), arg(complex.arg)
	{
		cout << "Copy constructor worked here" << endl;
	}
	Complex& operator=(Complex& c1) {
		if (this == &c1)
			return *this;
		re = c1.re;
		im = c1.im;
		abs = c1.abs;
		arg = c1.arg;
		return *this;
	}
	bool operator==(Complex c) {
		return abs == c.abs;
	}
	bool operator !=(Complex c) {
		return abs != c.abs;
	}
	bool operator >(Complex c) {
		return abs > c.abs;
	}
	bool operator <(Complex c) {
		return abs < c.abs;
	}
	friend ostream& operator<<(ostream& out, Complex &c) {
		out << "The module of complex number is " << c.abs << endl;
		out << "The argumebt of complex number is " << c.arg << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Complex &c) {
		cout << "Enter the real axis of number: ";
		in >> c.re;
		cout << "Enter the imaginary axis of number: ";
		in >> c.im;
		c.abs = sqrt(c.re*c.re + c.im * c.im);
		c.arg = atan(c.im / c.re);
		return in;
	}
	Complex& operator++() {
		im++;
		re++;
		abs = sqrt(re*re + im * im);
		arg = atan(im / re);
		return *this;
	}


	Complex & operator--() {
		im--;
		re--;
		abs = sqrt(re*re + im * im);
		arg = atan(im / re);
		return *this;
	}
	void setData() {
		cout << "Enter the real axis of number: ";
		cin >> re;
		cout << "Enter the imaginary axis of number: ";
		cin >> im;
		abs = sqrt(re*re + im * im);
		arg = atan(im / re);
	}
	~Complex(){
		cout << "Class complex was destructed." << endl;
	}
	void getComplex() {
		cout << "The module of complex number is " << abs << endl;
		cout << "The argumebt of complex number is " << arg << endl;
	}

};


#endif
