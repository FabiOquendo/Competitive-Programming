//============================================================
// Name        : 567B - Berland National Library.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 567B
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, momento, minimo;
    long int r;
    char signo;


    while (scanf("%d", &n) == 1) {

        momento=0;
        minimo=0;
        map<long int, int> numeros;

        while (n--) {

            scanf(" %c %ld", &signo, &r);

            if (signo == '+') {

                numeros[r]++;
                momento++;

                if (minimo < momento) {

                    minimo = momento;
                }

            } else if (numeros.find(r) != numeros.end()) {

                numeros.erase(r);
                momento--;

            } else {

                minimo++;
            }
        }

        printf("%d\n", minimo);
    }

    return 0;
}
