#pragma once

#include"Human.h"

class Boss : public Human {
private:
	int number_of_workers;
public:
	Boss() : Human() {
		number_of_workers = 0;
	}
	Boss(string surname, string name, string midname, int age, int number_of_workers) : Human(surname, name, midname, age) {
		this->number_of_workers = number_of_workers;
	}
	void set(int number) {
		number_of_workers = number;
	}
	void print() {
		cout << "I am boss. My name is " << surname << " " << name << " " << midname << endl;
		cout << "I'm " << age << " year's old" << endl;
		cout << "Number of workers in company - " << number_of_workers << endl;
	}
	~Boss() {
		cout << "Class boss was destructed here." << endl;
	}

	
};