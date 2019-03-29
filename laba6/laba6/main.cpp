

#include<iostream>
#include"Student.h"
#include"Starosta.h"
#include"Alive.h"
#include"Bird.h"
#include"Fish.h"
#include"Animal.h"
#include"Cat.h"
#include"Dog.h"

//using namespace std;

int main() {
	Student student1;
	Starosta starosta1;
	cin >> student1;
	cout << student1;
	cin >> starosta1;	
	starosta1.nextCourse();
	cout << starosta1;
	Bird bird1;
	cin >> bird1;
	bird1.changeFlyHeight(100);
	cout << bird1;
	Fish fish1;
	cin >> fish1;
	fish1.changeDepth(55);
	cout << fish1;
	Animal animal1;
	cin >> animal1;
	animal1.changeKind("Africa");
	cout << animal1;
	Cat cat1;
	cin >> cat1;
	cat1.voice();
	cat1.changeWeight(15.2);
	cout << cat1;
	Dog dog1;
	cin >> dog1;
	dog1.voice();
	dog1.changeWeight(25.4);
	cout << dog1;

	system("pause");
	return 0;
}