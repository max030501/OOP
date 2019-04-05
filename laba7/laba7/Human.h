#pragma once

#include<iostream>
#include<string>

using namespace std;

class Human {
protected:
	string surname;
	string name;
	string midname;
	int age;
public:
	Human() {
		surname = "Default";
		name = "Default";
		midname = "Default";
		age = 0;
	}
	Human(string surname, string name, string midname, int age) {
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
	}
	virtual void print() {
		cout << "I am human. My name is " << surname << " " << name << " " << midname << endl;
		cout << "I'm " << age << " year's old";
	}
	~Human() {
		cout << "Class human was destructed here.";
	}
};
