#pragma once

#include<iostream>
#include<string>
#include"Alive.h"

class Fish : public Alive {
protected:
	float depth;
public:
	Fish() : Alive() {
		depth = 0;
	}
	void changeDepth(float depth) {
		this->depth = depth;
	}
	friend ostream& operator<<(ostream& out, const Fish& f)
	{
		cout << "Age - " << f.age << endl;
		cout << "Speed - " << f.speed << endl;
		cout << "Name is " << f.name << endl;
		cout << "Depth is " << f.depth << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Fish& f)
	{
		cout << "Age - ";
		in >> f.age;
		cout << "Speed - ";
		in >> f.speed;
		cout << "Name is ";
		in >> f.name;
		cout << "Depth is";
		in >> f.depth;
		return in;
	}
};
