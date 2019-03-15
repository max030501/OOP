#include<iostream>

using namespace std;

int sum(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

int main() {
	int (*func)(int, int);
	int a, b, result;
	cout << "Enter the two numbers: ";
	cin >> a >> b;
	if (a > b)
		func = sum;
	else
		func = subtract;
	result = func(a, b);
	cout << "Resulter number is " << result;
	system("pause");
	return 0;
}