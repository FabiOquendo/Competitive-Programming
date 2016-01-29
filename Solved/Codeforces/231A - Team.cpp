//============================================================
// Name        : 231A - Team.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 231A
//============================================================

#include <stdio.h>

using namespace std;

int main() {

    int n, p, v, t, total;

    while (scanf("%d", &n) == 1) {

        total = 0;

        for (int i=0; i < n; i++) {

            scanf("%d %d %d", &p, &v, &t);

            if (p+v+t > 1) {

                total++;
            }
        }

        printf("%d\n", total);
    }

    return 0;
}

