#pragma once

#include"Human.h"

class Student : public Human {
private:
	bool on_lesson;
public:
	Student() : Human() {
		on_lesson = 0;
	}
	Student(string surname, string name, string midname, int age, bool on_lesson) : Human(surname,name, midname, age) {
		this->on_lesson = on_lesson;
	}
	void change() {
		if (on_lesson)
			on_lesson = 0;
		else
			on_lesson = 1;
	}
	void print() override {
		cout << "I am student. My name is " << surname << " " << name << " " << midname << endl;
		cout << "I'm " << age << " year's old" << endl;
		if (on_lesson)
		{
			cout << "I'm on lesson." << endl;
		}
		else
		{
			cout << "I'm not on lesson." << endl;
		}
	}
	~Student() {
		cout << "Class student was destructed here." << endl;
	}

};