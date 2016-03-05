//============================================================
// Name        : 1087 - Queen.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1087
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main(){

    int x1, y1, x2, y2;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    while (x1 != 0 || y1 != 0 || x2 != 0 || y2 != 0) {

        if (x1 == x2 && y1 == y2) {

            printf("0\n");

        } else if (x1 == x2 || y1 == y2) {

            printf("1\n");

        } else if ((double)(x2-x1)/(double)(y2-y1) == 1.0) {

             printf("1\n");

        } else if ((double)(x2-x1)/(double)(y2-y1) == -1.0) {

             printf("1\n");

        } else {

            printf("2\n");
        }

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    }

    return 0;
}
