//============================================================
// Name        : 580A - Kefa and First Steps.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems Codeforces
// Number	   : 580A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    long int n, a, aux, auxMax, maximum;

    while(scanf("%ld", &n) == 1) {

        aux = 0;
        auxMax = 0;
        maximum = 0;

        for(int i = 0; i < n; i++) {

            scanf("%ld", &a);

            if (a >= aux) {

                aux = a;
                auxMax++;

                maximum = max(maximum, auxMax);

            } else {

                aux = a;
                auxMax = 1;
            }
        }

        printf("%ld\n", maximum);
    }

    return 0;
}
