//============================================================
// Name        : 1585 - Making Kites.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1585
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, x, y;

    scanf("%d", &n);

    while(n--) {

        scanf("%d %d", &x, &y);

        printf("%d cm2\n", x*y/2);
    }

    return 0;
}

