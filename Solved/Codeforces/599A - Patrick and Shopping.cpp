//============================================================
// Name        : 599A - Patrick and Shopping.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number      : 599A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    long int d1, d2, d3, aux, res;

    while (scanf("%ld %ld %ld", &d1, &d2, &d3) == 3) {

        res = d1+d1+d2+d2;

        aux = d1+d3+d2;

        res = min(res, aux);

        aux = d1+d3+d3+d1;

        res = min(res, aux);

        aux = d2+d3+d3+d2;

        res = min(res, aux);

        printf("%ld\n", res);
    }

    return 0;
}
