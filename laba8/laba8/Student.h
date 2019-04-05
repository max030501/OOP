#pragma once
#include<iostream>
#include<string>

using namespace std;

class Student {
public:
	string name;
	string surname;
	int age;
	int course;
	Student() {
		name = "Default";
		surname = "Default";
		age = 0;
		course = 0;
	}

};