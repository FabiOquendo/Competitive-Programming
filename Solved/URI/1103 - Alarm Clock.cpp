//============================================================
// Name        : 1103 - Alarm Clock.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1103
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main(){

    int h1, m1, h2, m2, res;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    while (h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0) {

        res = 0;

        while(m1 != m2) {

            m1++;
            res++;

            if (m1 == 60) {

                m1 = 0;
                h1++;
            }
        }

        if (h1 == 24) {

            h1 = 0;
        }

        while(h1 != h2) {

            h1++;
            res+=60;

            if (h1 == 24) {

                h1 = 0;
            }
        }

        printf("%d\n", res);

        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    }

    return 0;
}
