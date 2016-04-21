//============================================================
// Name        : 1957 - Converting to Hexadecimal.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1957
//============================================================

#include <bits/stdc++.h>

#define PI 3.14

using namespace std;

map<int, char> hexa;

void inicializarHexa() {

    hexa[0] = '0';
    hexa[1] = '1';
    hexa[2] = '2';
    hexa[3] = '3';
    hexa[4] = '4';
    hexa[5] = '5';
    hexa[6] = '6';
    hexa[7] = '7';
    hexa[8] = '8';
    hexa[9] = '9';
    hexa[10] = 'A';
    hexa[11] = 'B';
    hexa[12] = 'C';
    hexa[13] = 'D';
    hexa[14] = 'E';
    hexa[15] = 'F';
}

int main() {

    inicializarHexa();

    long v;
    string res;

    while(scanf("%ld", &v) == 1) {

        res = "";

        while(v > 15) {

            res = hexa[v%16] + res;
            v/=16;
        }

        res = hexa[v] + res;

        printf("%s\n", res.c_str());
    }

    return 0;
}
