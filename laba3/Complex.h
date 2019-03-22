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
		cout << "Enter the real axis of number: ";
		cin >> re;
		cout << "Enter the imaginary axis of number: ";
		cin >> im;
		abs = sqrt(re*re + im * im);
		arg = atan(im / re);
	}
	void getComplex() {
		cout << "The module of complex number is " << abs << endl;
		cout << "The argumebt of complex number is " << arg << endl;
	}

};


#endif
