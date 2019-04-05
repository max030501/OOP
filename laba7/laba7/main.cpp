#include<iostream>
#include<string>
#include"Human.h"
#include"Student.h"
#include"Boss.h"


using namespace std;

int main() {
	Student student1("Sergeevich", "Maxim", "Timoshkin", 17, 0);
	Student student2;
	student1.print();
	student1.change();
	student1.print();
	student2.print();
	Boss boss1("Pavlovich", "Anton", "Nikulenko", 18, 0);
	Boss boss2;
	boss2.print();
	boss1.set(25);
	boss1.print();
	system("pause");
	return 0;
}

