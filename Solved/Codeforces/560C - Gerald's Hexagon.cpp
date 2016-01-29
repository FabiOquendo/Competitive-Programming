//============================================================
// Name        : 560C - Gerald's Hexagon.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number      : 560C
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int a1, a2, a3, a4, a5, a6;
    long int res;

    while(scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6) == 6) {

        // Formula para calcular los triangulos equilateros de 1 unidad
        // en un exagono de lados a1 a2 a3 a4 a5 y a6
        res = (a1+a2+a3)*(a1+a2+a3);
        res -= (a1*a1)+(a3*a3)+(a5*a5);

        printf("%ld\n", res);
    }

    return 0;
}
