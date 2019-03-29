#pragma once

#include<iostream>
#include<string>

using namespace std;

class Student {

protected:
	string fac;
	string spec;
	string name;
	int course;
public:
	Student() {
		fac = "default";
		spec = "default";
		name = "default";
		course = 0;
	}
	friend ostream& operator<<(ostream& out, const Student& s)
	{
		cout << "Faculty is " << s.fac << endl;
		cout << "Speciality is " << s.spec << endl;
		cout << "Name is " << s.name << endl;
		cout << s.course << " course" << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Student& s)
	{
		cout << "Faculty is ";
		in >> s.fac;
		cout << "Speciality is ";
		in >> s.spec;
		cout << "Name is ";
		in >> s.name;
		cout << "Course - ";
		in >> s.course;
		return in;
	}
	void nextCourse() {
		course++;
	}
	void changeFac(string fac)
	{
		this->fac = fac;
	}


};


