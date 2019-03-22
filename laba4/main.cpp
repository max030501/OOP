#include"Child.h"
#include"Tiles.h"
#include"Complex.h"
#include"Vector.h"


int main() {
    Child child1;
    child1.setData();
    child1.outputData();
    Child child2("Mike", "Anderson", 18);
	child2.outputData();

    Tiles tiles1;
    tiles1.setData();
    tiles1.getData();
    Tiles tiles2("Ceramic", 34.5, 10.6, 4000);
    tiles2.getData();


    cout << endl;

    Complex complex1;
    complex1.setData();
    complex1.getComplex();
    Complex complex2(15.25,16.13);
    complex2.getComplex();

    Vector vector1;
    vector1.setData();
    Vector vector2(25.6,22.1);
    vector1.sum(vector2);
    vector2.sub(vector1);
    vector1.getVector();
    vector2.getVector();

    return 0;
}