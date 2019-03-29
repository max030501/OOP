#pragma once

#include <iostream>
#include <string>
#include "Alive.h"


class Bird : public Alive 
{
protected:
	float flyHeight;
public:
	void changeFlyHeight(float height) {
		flyHeight = height;
	}
	Bird() : Alive() {
		flyHeight = 0;
	}

	friend ostream& operator<<(ostream& out, const Bird& b)
	{
		cout << "Age - " << b.age << endl;
		cout << "Speed - " << b.speed << endl;
		cout << "Name is " << b.name << endl;
		cout << "Fly height is " << b.flyHeight << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Bird& b)
	{
		cout << "Age - ";
		in >> b.age;
		cout << "Speed - ";
		in >> b.speed;
		cout << "Name is ";
		in >> b.name;
		cout << "Fly height is ";
		in >> b.flyHeight;
		return in;
	}
};
