#include<iostream>
#include"Complex.h"
#include"Vector.h"

using namespace std;


int main() {
	Complex complex1;
	Complex complex2;
	cin >> complex1;
	complex2 = complex1;
	++complex1;
	cout << complex1;
	cout << complex2;
	Vector vector1;
	Vector vector2;
	cin >> vector1;
	vector2 = vector1;
	cout << vector1;
	cout << vector2;

	
	system("pause");
	return 0;
}