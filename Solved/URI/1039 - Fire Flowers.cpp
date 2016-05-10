//============================================================
// Name        : 1039 - Fire Flowers.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1039
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main(){

    int r1, x1, y1, r2, x2, y2;
    int dx, dy, dr, dd, rr;

    while(scanf("%d %d %d %d %d %d", &r1,&x1,&y1,&r2,&x2,&y2) == 6) {

        dr = r1 - r2;
        dx = x1 - x2;
        dy = y1 - y2;

        dd = dx*dx + dy*dy;
        rr = dr*dr;

        if (dd <= rr && r1 >= r2) {

            printf("RICO\n");

        } else {

            printf("MORTO\n");
        }
    }

    return 0;
}
