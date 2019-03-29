#pragma once

#include<iostream>
#include<string>
#include "Student.h"

using namespace std;

class Starosta : public Student {
protected:
	int duration;
public:
	Starosta() : Student() {
		duration = 0;
	}
	void nextCourse() {
		course++;
		duration++;
	}

	friend ostream& operator<<(ostream& out, const Starosta& s)
	{
		cout << "Faculty is " << s.fac << endl;
		cout << "Speciality is " << s.spec << endl;
		cout << "Name is " << s.name << endl;
		cout << s.course << " course" << endl;
		cout << s.duration << " duration" << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Starosta& s)
	{
		cout << "Faculty is ";
		in >> s.fac;
		cout << "Speciality is ";
		in >> s.spec;
		cout << "Name is ";
		in >> s.name;
		cout << "Course - ";
		in >> s.course;
		cout << "Duration - ";
		in >> s.duration;
		return in;
	}
};
