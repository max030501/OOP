#include <fstream>
#include <iostream>
#include <string>
#include "complex.h"

using namespace std;


int main() {
    Complex maxAbs;
    int n;
    double re,im;
    fstream complex("F:\\Univer\\OOP\\laba1\\var2\\Complex.txt", ios::in);
    complex>>n;
    Complex p[n];
    for(int i = 0; i < n; i++)
    {
        complex>>re>>im;
        p[i].init(re,im);
        complex.ignore(1);
    }
    maxAbs = p[0];
    for(int i = 1; i< n; i++)
    {
        if(p[i].abs > maxAbs.abs)
            maxAbs=p[i];
    }
    maxAbs.output();
    system("pause");
    return 0;
}
