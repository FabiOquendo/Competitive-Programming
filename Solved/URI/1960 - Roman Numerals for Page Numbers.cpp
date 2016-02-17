//============================================================
// Name        : 1960 - Roman Numerals for Page Numbers.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1960
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    while(scanf("%d", &n) == 1) {

        while(n > 0) {

            if(n >= 900) {

                printf("CM");
                n-=900;

            } else if(n < 900 && n >= 500) {

                printf("D");
                n-=500;

            } else if(n < 500 && n >= 400) {

                printf("CD");
                n-=400;

            } else if(n < 400 && n >= 100) {

                printf("C");
                n-=100;

            } else if(n >= 90) {

                printf("XC");
                n-=90;

            } else if(n < 90 && n >= 50) {

                printf("L");
                n-=50;

            } else if(n < 50 && n >= 40) {

                printf("XL");
                n-=40;

            } else if(n < 40 && n >= 10) {

                printf("X");
                n-=10;

            } else if(n == 9) {

                printf("IX");
                n-=9;

            } else if(n < 9 && n >= 5) {

                printf("V");
                n-=5;

            } else if(n == 4) {

                printf("IV");
                n-=4;

            } else if(n < 4 && n >= 1) {

                printf("I");
                n-=1;
            }
        }

        printf("\n");
    }

    return 0;
}
