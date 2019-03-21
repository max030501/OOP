#include<iostream>
#include<string>
#include<math.h>
using namespace std;


class Child {
private:
    string name;
    string family;
    int age;
public:
    Child(){
        cout << "Enter the name of the child: ";
        cin >> name;
        cout << "Enter the family of the child: ";
        cin >> family;
        cout << "Enter the age of the child: ";
        cin >> age;
    }
    void outputData(){
        cout << "The name of the child is " << name << endl;
        cout << "The family of the child is " << family << endl;
        cout << "The age of the child: " << age << endl;
    }

};


class Tiles {
public:
    string brand;
    int size_h;
    int size_w;
    float price;
    void getData(){
        cout << "The brand of tiles is " << brand << endl;
        cout << "The height of tile is " << size_h << endl;
        cout << "The width of tile is " << size_w << endl;
        cout << "The price of tile is " << price << endl;

    }
};


class Complex {
private:
    float re, im;
    float abs, arg;
public:
    Complex(){
        cout << "Enter the real axis of number: ";
        cin >> re;
        cout << "Enter the imaginary axis of number: ";
        cin >> im;
        abs = sqrt(re*re+im*im);
        arg = atan(im/re);
    }
    void getComplex(){
        cout << "The module of complex number is " << abs << endl;
        cout << "The argumebt of complex number is " << arg << endl;
    }

};


class Vector {
private:
    float x, y;
    float abs;
public:
    Vector(){
        cout << "Enter the x coordinate of vector: ";
        cin >> x;
        cout << "Enter the y coordinate of vector: ";
        cin >> y;
    }

    void ABS(){
        abs = sqrt(x*x+y*y);
    }

    void sum(Vector v){
        x+=v.x;
        y+=v.y;
    }

    void sub(Vector v){
        x -=v.x;
        y -=v.y;
    }
    void getVector(){
        cout << "The x coordinate of vector is " << x << endl;
        cout << "The y coordinate of vector is " << y << endl;
        cout << "The module of vector is " << abs << endl;
    }
};

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