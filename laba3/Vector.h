#ifndef vector_h
#define vector_h
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class Vector {
private:
	float x, y;
	float abs;
public:
	Vector() {
		cout << "Enter the x coordinate of vector: ";
		cin >> x;
		cout << "Enter the y coordinate of vector: ";
		cin >> y;
	}

	void ABS() {
		abs = sqrt(x*x + y * y);
	}

	void sum(Vector v) {
		x += v.x;
		y += v.y;
	}

	void sub(Vector v) {
		x -= v.x;
		y -= v.y;
	}
	void getVector() {
		cout << "The x coordinate of vector is " << x << endl;
		cout << "The y coordinate of vector is " << y << endl;
		cout << "The module of vector is " << abs << endl;
	}
};

#endif


