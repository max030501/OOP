#ifndef tiles_h
#define tiles_h
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class Tiles {
public:
	string brand;
	int size_h;
	int size_w;
	float price;
	void getData() {
		cout << "The brand of tiles is " << brand << endl;
		cout << "The height of tile is " << size_h << endl;
		cout << "The width of tile is " << size_w << endl;
		cout << "The price of tile is " << price << endl;

	}
};

#endif

