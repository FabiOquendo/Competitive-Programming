//============================================================
// Name        : 1262 - Multiple Reading.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1262
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main(){

    char line[60];
    int p, res, aux;

    while(gets(line) != NULL) {

        scanf("%d", &p);
        res = 0; aux = 0;

        for(int i = 0; i<strlen(line); i++) {

            if (line[i] == 'R') {

                aux++;

            } if (line[i] == 'W') {

                res++;
                res += aux/p;
                if (aux%p != 0) res++;
                aux = 0;
            }
        }

        if (aux != 0) {

            res += aux/p;

            if (aux%p != 0) res++;
        }

        printf("%d\n", res);
        gets(line);
    }

    return 0;
}
