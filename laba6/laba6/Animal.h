#pragma once


#include<iostream>
#include<string>
#include"Alive.h"

class Animal : public Alive {
protected:
	string kind;
public:
	Animal() : Alive() {
		kind = "default";
	}
	friend ostream& operator<<(ostream& out, const Animal& a)
	{
		cout << "Age - " << a.age << endl;
		cout << "Speed - " << a.speed << endl;
		cout << "Name is " << a.name << endl;
		cout << "Kind is " << a.kind << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Animal& a)
	{
		cout << "Age - ";
		in >> a.age;
		cout << "Speed - ";
		in >> a.speed;
		cout << "Name is ";
		in >> a.name;
		cout << "Kind is ";
		in >> a.kind;
		return in;
	}
	void changeKind(string kind) {
		this->kind = kind;
	}
};