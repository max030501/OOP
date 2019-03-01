#include "complex.h"

int main() {
    bool end = true;
    bool changeNumber = true;
    Complex c1, c2, c3;
    double x, y;
    int choice;
    while (end) {
        if (changeNumber) {
            cout << "Enter the real and imaginary axises of first complex number: ";
            cin >> x >> y;
            c1.init(x, y);
            cout << "Enter the real and imaginary axises of second complex number: ";
            cin >> x >> y;
            c2.init(x, y);
        }
        do {
            cout << endl << "Available operations:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n\nChoose operation: ";
            cin >> choice;
            if (choice > 4 | choice < 1)
                cout << endl << "Wrong number! Try again:\n";
        } while (choice > 4 | choice < 1);
        switch (choice) {
            case 1:
                c3.add(c1, c2);
				c3.output();
                break;
            case 2:
                c3.subtract(c1, c2);
				c3.output();
                break;
            case 3:
                c3.multiply(c1, c2);
				c3.output();
                break;
            case 4:
				if (c2.check())
				{
					c3.divide(c1, c2);
					c3.output();
				}
                break;
        }
        do {
            cout << endl << "Available actions:\n1. Choose another operation\n2. Choose another numbers\n3. Exit\n\nChoose action: ";
            cin >> choice;
            if (choice > 3 | choice < 1)
                cout << endl << "Wrong number! Try again:\n";
        } while (choice > 3 | choice < 1);
        switch (choice) {
            case 1:
                changeNumber = false;
                break;
            case 2:
                changeNumber = true;
                break;
            case 3:
                end = false;
                break;
        }
    }
    return 0;
}
