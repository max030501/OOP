#ifndef tiles_h
#define tiles_h
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class Tiles {
private:
	string brand;
	int size_h;
	int size_w;
	float price;
public:
	Tiles() {
		brand = "Default name";
		size_h = 0;
		size_w = 0;
		price = 0;
	}
	Tiles(string brand, int size_h, int size_w, float price)
	{
		this->brand = brand;
		this->size_h = size_h;
		this->size_w = size_w;
		this->price = price;
	}
	Tiles(const Tiles &tiles) :
		brand(tiles.brand), size_h(tiles.size_h), size_w(tiles.size_w), price(tiles.price)
	{
		cout << "Copy constructor worked here" << endl;
	}
	void setData() {
		cout << "Enter the brand of tiles: ";
		cin >> brand;
		cout << "Enter the height of tiles: ";
		cin >> size_h;
		cout << "Enter the width of tiles: ";
		cin >> size_w;
		cout << "Enter the price of tiles: ";
		cin >> price;

	}
	~Tiles(){
		cout << "Class tiles was destructed." << endl;
	}

	void getData() {
		cout << "The brand of tiles is " << brand << endl;
		cout << "The height of tile is " << size_h << endl;
		cout << "The width of tile is " << size_w << endl;
		cout << "The price of tile is " << price << endl;

	}
};

#endif

