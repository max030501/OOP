#include "complex.h"

int main() {
    bool end = true;
    bool changeNumber = true;
    Complex c1, c2, c3;
    double x, y;
    int choice;
    while (end) {
        if (changeNumber) {
            cout << "Введите действительную и мнимую части первого комплексного числа: ";
            cin >> x >> y;
            c1.init(x, y);
            cout << "Введите действительную и мнимую части второго комплексного числа: ";
            cin >> x >> y;
            c2.init(x, y);
        }
        do {
            cout << endl << "Доступные операции:\n1. Сложение\n2. Вычитание\n3. Умножение\n4. Деление\n\nВыберите операцию: ";
            cin >> choice;
            if (choice > 4 | choice < 1)
                cout << endl << "Неверное значение! Повторите выбор:\n";
        } while (choice > 4 | choice < 1);
        switch (choice) {
            case 1:
                c3.add(c1, c2);
                break;
            case 2:
                c3.subtract(c1, c2);
                break;
            case 3:
                c3.multiply(c1, c2);
                break;
            case 4:
                c3.divide(c1, c2);
                break;
        }
        c3.output();
        do {
            cout << endl << "Доступные действия:\n1. Выбрать другую операцию\n2. Выбрать другие числа\n3. Выйти\n\nВыберите действие:";
            cin >> choice;
            if (choice > 3 | choice < 1)
                cout << endl << "Неверное значение! Повторите выбор:\n";
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
