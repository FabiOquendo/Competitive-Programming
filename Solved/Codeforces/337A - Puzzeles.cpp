//============================================================
// Name        : 337A - Puzzeles.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 337A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main () {

    int n,m;

    while (scanf("%d %d", &n, &m) == 2) {

        int arreglo[60];

        for (int i=0; i < m; i++) {

            scanf("%d", &arreglo[i]);
        }

        sort(arreglo,arreglo+m);

        int res = 1000000;

        for (int i=0; i <= m-n; i++) {

            res = min(res, arreglo[i+n-1] - arreglo[i]);
        }

        printf("%d\n", res);
    }

    return 0;
}
