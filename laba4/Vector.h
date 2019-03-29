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
		x = 0;
		y = 0;
		abs = 0;
	}
	Vector(float x, float y)
	{
		this->x = x;
		this->y = y;
		abs = sqrt(x*x + y * y);
	}
	Vector(const Vector &vector) :
		x(vector.x), y(vector.y), abs(vector.abs)
	{
		cout << "Copy constructor worked here" << endl;
	}
	void setData() {
		cout << "Enter the x coordinate of vector: ";
		cin >> x;
		cout << "Enter the y coordinate of vector: ";
		cin >> y;
	}
	void sum(Vector v) {
		x += v.x;
		y += v.y;
		abs = sqrt(x*x + y * y);
	}

	void sub(Vector v) {
		x -= v.x;
		y -= v.y;
		abs = sqrt(x*x + y * y);
	}
	void getVector() {
		cout << "The x coordinate of vector is " << x << endl;
		cout << "The y coordinate of vector is " << y << endl;
		cout << "The module of vector is " << abs << endl;
	}
	~Vector(){
		cout << "Class vector was destructed." << endl;
	}

};

#endif


