#include<iostream>

using namespace std;

double* newArray(int size) {
	return new double[size];
}

void inputArray(double *mas, int size) {
	for (int i = 0; i < size; i++) {
		cout << "Enter the " << i + 1 << " element of array: ";
		cin >> mas[i];
	}
}

void outputArray(double *mas, int size) {
	for (int i = 0; i < size; i++) {
		cout << "The " << i + 1 << " element of array: " << mas[i] << endl;
	}
}

void deleteArray(double *mas) {
		delete[] mas;
}

int main() {
	bool end = true;
	while (end) {
		int size;
		cout << "Enter the size of array: ";
		cin >> size;
		double *mas = newArray(size);
		inputArray(mas, size); 
		outputArray(mas, size);
		deleteArray(mas);
		cout << "Do you want to create another array(1) or exit programm(0)";
		cin >> end;
	}
	return 0;


}