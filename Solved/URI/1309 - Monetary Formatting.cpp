//============================================================
// Name        : 1309 - Monetary Formatting.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1309
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main(){

    char dollars[20], cents[5];
    int aux, i;

    while(gets(dollars) != NULL) {

        gets(cents);
        aux = strlen(dollars)%3;
        i=0;
        printf("$");

        for(; i<aux; i++) {
            printf("%c", dollars[i]);
        }

        for(; i<strlen(dollars); i++) {

            if (i%3 == aux && i != 0) printf(",");

            printf("%c", dollars[i]);
        }

        printf(".");

        if (strlen(cents) == 2) {

            printf("%c%c", cents[0], cents[1]);

        } else {

            printf("0%c", cents[0]);
        }

        printf("\n");
    }

    return 0;
}
