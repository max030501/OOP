#include"Complex.h"
#include<vector>
#include <queue>   
#include<list>
#include<iterator>

int main() {
	cout << "Enter student's names:" << endl;
	vector<string> stud;
	string buff = "";
	do {
		getline(cin, buff);
		if (buff.size() > 0) {
			stud.push_back(buff);
		}
	} while (buff != "");
	cout << "Students:" << endl;
	for (unsigned int i = 0; i < stud.size(); i++)
		cout << stud[i] << endl;


	list<Comp>comp;
	Comp comp1;
	Comp comp2;
	Comp comp3;
	cin >> comp1;
	cin >> comp2;
	cin >> comp3;


	
	comp.push_back(comp1);
	comp.push_back(comp2);
	comp.push_back(comp3);
	unsigned int size = 0;
	size = comp.size();
	for (unsigned int i = 0; i < size; i++) {
		cout << comp.front() << endl;
		comp.pop_front();
	}

	queue<string>car;
	cout << "Enter the car model: ";
	cin.ignore();
	getline(cin, buff);
	car.push(buff);
	while (!car.empty()) {
		cout << "Last in the queue is "<<  car.front() << " ";
		car.pop();
	}



	system("pause");
	return 0;
	

}
