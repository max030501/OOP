#include "complex.h"

int main() {
    bool end = true;
    bool changeNumber = true;
    Complex c1, c2, c3;
    double x, y;
    int choice;
    while (end) {
        if (changeNumber) {
            cout << "������ ����⢨⥫��� � ������ ��� ��ࢮ�� �������᭮�� �᫠: ";
            cin >> x >> y;
            c1.init(x, y);
            cout << "������ ����⢨⥫��� � ������ ��� ��ண� �������᭮�� �᫠: ";
            cin >> x >> y;
            c2.init(x, y);
        }
        do {
            cout << endl << "����㯭� ����樨:\n1. ��������\n2. ���⠭��\n3. ���������\n4. �������\n\n�롥�� ������: ";
            cin >> choice;
            if (choice > 4 | choice < 1)
                cout << endl << "����୮� ���祭��! ������ �롮�:\n";
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
            cout << endl << "����㯭� ����⢨�:\n1. ����� ����� ������\n2. ����� ��㣨� �᫠\n3. ���\n\n�롥�� ����⢨�:";
            cin >> choice;
            if (choice > 3 | choice < 1)
                cout << endl << "����୮� ���祭��! ������ �롮�:\n";
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
