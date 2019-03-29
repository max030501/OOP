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
	Vector& operator=(const Vector& v1) {
		if (this == &v1)
			return *this;
		x = v1.x;
		y = v1.y;
		abs = v1.abs;
		return *this;
	}
	bool operator == (Vector v1) {
		return v1.abs == abs;
	}

	bool operator!=(Vector v1) {
		return v1.abs != abs;
	}

	bool operator >(Vector v1) {
		return abs > v1.abs;
	}
	bool operator <(Vector v1) {
		return abs < v1.abs;
	}
	friend ostream& operator <<(ostream &out, const Vector& i) {
		out << "The x coordinate of vector is " << i.x << endl;
		out << "The y coordinate of vector is " << i.y << endl;
		out << "The module of vector is " << i.abs << endl;
		return out;
	}
	friend istream& operator >>(istream &in, Vector& i) {
		cout << "Enter the x coordinate of vector: ";
		in >> i.x;
		cout << "Enter the y coordinate of vector: ";
		in >> i.y;
		i.abs = sqrt(i.x*i.x + i.y*i.y);
		return in;
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
	~Vector(){
		cout << "Class vector was destructed." << endl;
	}

};

#endif


