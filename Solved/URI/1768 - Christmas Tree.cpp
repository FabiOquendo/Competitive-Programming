//============================================================
// Name        : 1768 - Christmas Tree.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1768
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, aux;

    while(scanf("%d", &n) == 1) {

        for (int i = 1; i <= n; i+=2) {

           aux = (n-i)/2;

           for(int j = 0; j < aux; j++) printf(" ");
           for(int j = 0; j < i; j++) printf("*");

           printf("\n");
        }

        for (int i = 1; i <= 3; i+=2) {

           aux = (n-i)/2;

           for(int j = 0; j < aux; j++) printf(" ");
           for(int j = 0; j < i; j++) printf("*");

           printf("\n");
        }

        printf("\n");
    }

    return 0;
}
