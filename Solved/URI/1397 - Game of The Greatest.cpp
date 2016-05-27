//============================================================
// Name        : 1397 - Game of The Greatest.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1397
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, a, b, x, y;

    scanf("%d", &n);

    while(n) {

        x = 0; y = 0;

        while(n--) {

            scanf("%d %d", &a, &b);


            if (a > b) {

                x++;

            } else if (a < b) {

                y++;
            }
        }

        printf("%d %d\n", x, y);

        scanf("%d", &n);
    }

    return 0;
}
