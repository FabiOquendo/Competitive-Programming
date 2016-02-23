//============================================================
// Name        : 1249 - Rot13.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1249
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main(){

    int i, aux;
    char line[60], res[60];

    while(gets(line) != NULL) {

        i = 0;

        for(; i<strlen(line); i++) {

            if (line[i] >= 97 && line[i] <= 122) {

                aux = line[i]-13;

                if (aux < 97) {

                    aux = 97-aux;
                    aux = 123-aux;
                }

            } else if (line[i] >= 65 && line[i] <= 90) {

                aux = line[i]-13;

                if (aux < 65) {

                    aux = 65-aux;
                    aux = 91-aux;

                }

            } else {

                aux = line[i];
            }

            res[i] = aux;
        }

        res[i] = '\0';

        printf("%s\n", res);
    }

    return 0;
}
