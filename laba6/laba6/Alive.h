#pragma once

#include<iostream>
#include<string>
using namespace std;
class Alive{
protected:
	int age;
	float speed;
	string name;
public:
	void nextYear() {
		age++;
	}
	void changeSpeed(float count) {
		speed += count;
	}
	Alive() {
		age = 0;
		speed = 0;
		name = "default";
	}
	friend ostream& operator<<(ostream& out, const Alive& a)
	{
		cout << "Age - " << a.age << endl;
		cout << "Speed - " << a.speed << endl;
		cout << "Name is " << a.name << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Alive& a)
	{
		cout << "Age - ";
		in >> a.age;
		cout << "Speed - ";
		in >> a.speed;
		cout << "Name is ";
		in >> a.name;
		return in;
	}
};