#include"Child.h"
#include"Tiles.h"
#include"Complex.h"
#include"Vector.h"


int main() {
    Child child1;
    child1.outputData();
    Child child2;
	child2.outputData();

    Tiles tiles1, tiles2;

    cout << "Enter the brand of tiles: ";
    cin >> tiles1.brand;
    cout << "Enter the height of tiles: ";
    cin >> tiles1.size_h;
    cout << "Enter the width of tiles: ";
    cin >> tiles1.size_w;
    cout << "Enter the price of tiles: ";
    cin >> tiles1.price;
    tiles1.getData();

    cout << endl;

    cout << "Enter the brand of tiles: ";
    cin >> tiles2.brand;
    cout << "Enter the height of tiles: ";
    cin >> tiles2.size_h;
    cout << "Enter the width of tiles: ";
    cin >> tiles2.size_w;
    cout << "Enter the price of tiles: ";
    cin >> tiles2.price;
    tiles2.getData();

    cout << endl;

    Complex complex1;
    complex1.getComplex();
    Complex complex2;
    complex2.getComplex();

    Vector vector1;
    Vector vector2;
    vector1.sum(vector2);
    vector2.sub(vector1);
    vector1.ABS();
    vector2.ABS();
    vector1.getVector();
    vector2.getVector();

    return 0;
}