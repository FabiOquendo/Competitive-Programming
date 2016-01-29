//============================================================
// Name        : 570B - Simple Game.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 570B
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    long int n, m, res;

    while(scanf("%ld %ld", &n, &m) == 2) {

        if (n == 1) {

            res = 1;

        } else {

            if (m > (n-m)) {

                res = m-1;

            } else {

                res = m+1;
            }
        }

        printf("%ld\n", res);
    }

    return 0;
}

