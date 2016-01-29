//============================================================
// Name        : 1002 - Area of a Circle.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1002
//============================================================

#include <bits/stdc++.h>

using namespace std;

#define PI 3.14159

int main() {

    double r;

    while(scanf("%lf", &r) == 1) {

        printf("A=%.4lf\n", PI*r*r);
    }

    return 0;
}
