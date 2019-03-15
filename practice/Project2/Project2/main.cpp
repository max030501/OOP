#include<iostream>

using namespace std;

void fillArray(int row, int column, int **mas) {
	for (int i = 0; i < row; i++) {
		for(int j = 0; j < column; j++){
			mas[i][j] = 10 + rand() % 40;
		}
	}

}

void outputArray(int row, int column, int **mas) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int **mas;
	int row, column;
	cout << "Enter the number of rows and columns: ";
	cin >> row >> column;
	mas = new int*[row];
	for (int i = 0; i < row; i++)
		mas[i] = new int[column];
	fillArray(row, column, mas);
	outputArray(row, column, mas);
	for (int i = 0; i < row; i++) {
		delete[] mas[i];
	}
	system("pause");
	
	return 0;

}