#include<iostream>

using namespace std;

int main() {
	int temp;
	int *mas;
	mas = new int[12];
	for (int i = 0; i < 12; i++) {
		cout << "Enter the " << i + 1 << " element of array: ";
		cin >> mas[i];
	}
	for (int i = 0; i < 12; i += 2) {
		temp = mas[i];
		mas[i] = mas[i + 1];
		mas[i + 1] = temp;
	}
	for (int i = 0; i < 12; i++) {
		cout << "The " << i + 1 << " element of array: " << mas[i] << endl;
	}

	delete[] mas;
	system("pause");
	return 0;
}
