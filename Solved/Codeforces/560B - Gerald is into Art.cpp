//============================================================
// Name        : 560B - Gerald is into Art.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 560B
//============================================================

#include <stdio.h>

using namespace std;

int main() {

    int a1, b1, a2, b2, a3, b3, sumX, mayY;

    while(scanf ("%d %d", &a1, &b1) == 2) {

        scanf ("%d %d", &a2, &b2);
        scanf ("%d %d", &a3, &b3);

        sumX = a2+a3;
        mayY = (b2 > b3) ? b2 : b3;

        if ((sumX <= a1 && mayY <= b1) || (sumX <= b1 && mayY <= a1)) {

            printf("YES\n");
            continue;
        }

        sumX = b2+a3;
        mayY = (a2 > b3) ? a2 : b3;

        if ((sumX <= a1 && mayY <= b1) || (sumX <= b1 && mayY <= a1)) {

            printf("YES\n");
            continue;
        }

        sumX = b2+b3;
        mayY = (a2 > a3) ? a2 : a3;

        if ((sumX <= a1 && mayY <= b1) || (sumX <= b1 && mayY <= a1)) {

            printf("YES\n");
            continue;
        }

        sumX = a2+b3;
        mayY = (b2 > a3) ? b2 : a3;

        if ((sumX <= a1 && mayY <= b1) || (sumX <= b1 && mayY <= a1)) {

            printf("YES\n");
            continue;
        }

        printf("NO\n");
    }

    return 0;
}
