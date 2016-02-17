//============================================================
// Name        : 1091 - Division of Nlogonia.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1091
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int k, n, m, x, y;

    scanf("%d", &k);

    while (k != 0) {

        scanf("%d %d", &n, &m);

        while (k--) {

            scanf("%d %d", &x, &y);

            if (x == n || y == m) {

                printf("divisa\n");

            } else if (x > n && y > m) {

                printf("NE\n");

            } else if (x < n && y > m) {

                printf("NO\n");

            } else if (x > n && y < m) {

                printf("SE\n");

            } else if (x < n && y < m) {

                printf("SO\n");
            }
        }

        scanf("%d", &k);
    }

    return 0;
}
