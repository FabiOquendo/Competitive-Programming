//============================================================
// Name        : 1962 - A Long, Long Time Ago.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1962
//============================================================

#include <bits/stdc++.h>

#define YEAR 2015

using namespace std;

int main() {

    long n, t, res;
    scanf("%ld", &n);

    while(n--) {

        scanf("%ld", &t);

        res = YEAR - t;

        if (res <= 0) {

            printf("%ld A.C.\n", abs(res-1));

        } else {

            printf("%ld D.C.\n", res);
        }
    }

    return 0;
}
