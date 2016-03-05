//============================================================
// Name        : 1329 - Head or Tail.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1329
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, aux, m, j;

    scanf("%d", &n);

    while (n != 0) {

        m = 0; j = 0;

        while(n--) {

            scanf("%d", &aux);

            if (aux == 0) {

                m++;

            } else {

                j++;
            }
        }

        printf("Mary won %d times and John won %d times\n", m, j);

        scanf("%d", &n);
    }

    return 0;
}
