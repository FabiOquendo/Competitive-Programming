//============================================================
// Name        : 282A - Bit++.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 282A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, n;
    char line[4];

    while (scanf("%d", &n) == 1) {

        x=0;

        while (n--) {
            scanf("%s", &line);
            if (line[1] == '+') {

                x++;

            } else {

                x--;
            }
        }

        printf("%d\n", x);
    }

    return 0;
}
