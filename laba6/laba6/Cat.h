#pragma once


#include<iostream>
#include<string>
#include"Animal.h"

class Cat : public Animal {
protected:
	float weight;
public:
	void voice() {
		cout << "Meow";
	}
	Cat() : Animal() {
		weight = 0;
	}
	void changeWeight(float weight) {
		this->weight = weight;
	}
	friend ostream& operator<<(ostream& out, const Cat& c)
	{
		cout << "Age - " << c.age << endl;
		cout << "Speed - " << c.speed << endl;
		cout << "Name is " << c.name << endl;
		cout << "Kind is " << c.kind << endl;
		cout << "Weight is " << c.weight << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Cat& c)
	{
		cout << "Age - ";
		in >> c.age;
		cout << "Speed - ";
		in >> c.speed;
		cout << "Name is ";
		in >> c.name;
		cout << "Kind is ";
		in >> c.kind;
		cout << "Weight is ";
		in >> c.weight;
		return in;
	}
};