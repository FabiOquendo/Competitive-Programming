//============================================================
// Name        : 298A - Snow Footprints.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number      : 298A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, r, l, indexR, indexL, s, t;
    char line[1001];

    while(scanf("%d", &n) == 1) {

        scanf("%s", &line);

        r = 0; l = 0;
        indexR = 1; indexL=strlen(line);

        for (int i = 0; i < strlen(line); i++) {

            if(line[i] == 'R') {

                if (r == 0) indexR = i;
                r++;

            } else if(line[i] == 'L') {

                l++;
                indexL = i;
            }
        }

        if (r >= l) {

            s = indexR;

            if (l != 0) {

                t = indexL - l;
                t++;

            } else {

                t = s+r;
                t += 1;
            }

        } else {

            s = indexL;

            if (r != 0) {

                t = indexR + r;
                t++;

            } else {

                t = s-l;
                t += 1;
            }
        }

        s++;

        printf("%d %d", s, t);
    }

    return 0;
}
