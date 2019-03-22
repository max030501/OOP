#ifndef child_h
#define child_h
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class Child {
private:
	string name;
	string family;
	int age;
public:
	Child() {
		cout << "Enter the name of the child: ";
		cin >> name;
		cout << "Enter the family of the child: ";
		cin >> family;
		cout << "Enter the age of the child: ";
		cin >> age;
	}
	void outputData() {
		cout << "The name of the child is " << name << endl;
		cout << "The family of the child is " << family << endl;
		cout << "The age of the child: " << age << endl;
	}

};

#endif


