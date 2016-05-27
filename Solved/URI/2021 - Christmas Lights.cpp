//============================================================
// Name        : 2021 - Christmas Lights.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 2021
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int m, n, p, q, res, lights;
    scanf("%d %d %d", &m, &n, &p);

    while(m != 0 || n != 0 || p != 0) {

        res = 0;

        while(p--) {

            scanf("%d", &q);

            if (q%n == 0) {

                res++;

            } else {

                res += n-(q%n)+1;
            }
        }

        printf("Lights: %d\n", res);

        scanf("%d %d %d", &m, &n, &p);
    }

    return 0;
}
