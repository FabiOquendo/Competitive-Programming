//============================================================
// Name        : 1237 - Compare Substring.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number      : 1237
//============================================================

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){

    int n, size1, size2, cont, res, aux;
    char line1[60];
    char line2[60];

    while(gets(line1)) {

        gets(line2);
        size1 = strlen(line1);
        size2 = strlen(line2);

        res = 0;

        for(int i=0; i<size1; i++) {

            for(int j=0; j<size2; j++) {

                if(line1[i] == line2[j]) {

                    cont = 0;

                    for (int k = 0; k+i<size1, k+j<size2; k++) {

                        if (line1[k+i] != line2[k+j]) break;

                        cont++;
                    }

                    res = max(cont, res);
                }
            }
        }

        printf("%d\n", res);
    }

    return 0;
}
