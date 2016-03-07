//============================================================
// Name        : 1263 - Alliteration.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1263
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main(){

    char line[10000];
    char c;
    int res, aux;
    bool flag;

    while(gets(line) != NULL) {

        res = 0; aux = 1;
        c = line[0];
        flag = false;

        for(int i = 1; i<strlen(line); i++) {

            if(line[i] == ' ') {

                if (tolower(line[i+1]) == tolower(c)) {

                    aux++;

                    if (aux >= 2 && !flag) {

                        res++;
                        flag = true;
                    }

                } else {

                    c = line[i+1];
                    aux = 1;
                    flag = false;
                }
            }
        }

        printf("%d\n", res);
    }

    return 0;
}
