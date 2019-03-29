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
