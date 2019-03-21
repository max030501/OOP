#include<iostream>

using namespace std;



int comp1(const void * x1, const void * x2)
{
	return (*(int*)x1 - *(int*)x2);
}

int comp2(const void * x1, const void * x2)
{
	return (*(int*)x2 - *(int*)x1);
}

void func1(int *mas)
{
	int temp;
	for (int i = 0; i < 5; i++)
	{
		temp = mas[i];
		mas[i] = mas[9 - i];
		mas[9 - i] = temp;
	}
}

void func2(int *mas)
{
	qsort(mas, 10, sizeof(int), comp1);
}


void func3(int *mas)
{
	qsort(mas, 10, sizeof(int), comp2);
}


void(*choice(int *mas, int sum))(int*) {
	void(*func)(int*) = NULL;
	if (sum == mas[0]) func = func1;
	if (sum > mas[0]) func = func2;
	if (sum < mas[0]) func = func3;

	return func;
}

int main() {
	int sum = 0;
	int mas[10];
	void(*func)(int*);
	for (int i = 0; i < 10; i++)
	{
		mas[i] = rand();
		sum += mas[i];
	}
	func = choice(mas, sum);
	func(mas);

	for (int i = 0; i < 10; i++)
		cout << mas[i] << " ";
	system("pause");
	return 0;

	
}