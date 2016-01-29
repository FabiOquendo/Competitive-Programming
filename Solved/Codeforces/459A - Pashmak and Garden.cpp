//============================================================
// Name        : 459A - Pashmak and Garden.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number      : 459A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int x1, y1, x2, y2, aux, x3, y3, x4, y4;

    bool flag;

    while(scanf("%d %d %d %d", &x1, &y1, &x2, &y2) == 4) {

        flag = false;

        if(x1 == x2) {

            aux = abs(y1-y2);
            x3 = x1+aux;
            x4 = x2+aux;
            y3 = y1;
            y4 = y2;

            flag = true;

        } else if (y1 == y2) {

            aux = abs(x1-x2);
            y3 = y1+aux;
            y4 = y2+aux;
            x3 = x1;
            x4 = x2;

            flag = true;

        } else if (abs(x1-x2) == abs(y1-y2)) {

            x3 = x1;
            y3 = y2;
            x4 = x2;
            y4 = y1;

            flag = true;

        } else {

            printf("-1");
        }

        if(flag) {

            printf("%d %d %d %d\n", x3, y3, x4, y4);
        }
    }

    return 0;
}
