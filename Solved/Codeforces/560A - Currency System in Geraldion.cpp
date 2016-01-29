//============================================================
// Name        : 560A - Currency System in Geraldion.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 560A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    long int n, a;
    bool one;

    while (scanf("%d", &n) == 1) {

        one = false;

        while (n--) {

            scanf("%d", &a);

            if (a == 1) {

                one = true;
            }
        }

        if (one) {

            printf("-1\n");

        } else {

            printf("1\n");
        }
    }

    return 0;
}
