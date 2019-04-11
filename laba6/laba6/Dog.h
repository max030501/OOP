#pragma once



#include<iostream>
#include<string>
#include"Animal.h"

class Dog : public Animal {
protected:
	float weight;
public:
	void voice() {
		cout << "Woof" << endl;
	}
	Dog() : Animal() {
		weight = 0;
	}
	void changeWeight(float weight) {
		this->weight = weight;
	}
	friend ostream& operator<<(ostream& out, const Dog& d)
	{
		cout << "Age - " << d.age << endl;
		cout << "Speed - " << d.speed << endl;
		cout << "Name is " << d.name << endl;
		cout << "Kind is " << d.kind << endl;
		cout << "Weight is " << d.weight << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Dog& d)
	{
		cout << "Age - ";
		in >> d.age;
		cout << "Speed - ";
		in >> d.speed;
		cout << "Name is ";
		in >> d.name;
		cout << "Kind is ";
		in >> d.kind;
		cout << "Weight is ";
		in >> d.weight;
		return in;
	}
};