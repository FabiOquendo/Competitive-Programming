//============================================================
// Name        : 583A - Asphalting Roads.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 583A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, h, v;

    while (scanf("%d", &n) == 1) {

            bool horisontales[n];
            bool verticales[n];
            memset(horisontales, false, sizeof horisontales);
            memset(verticales, false, sizeof verticales);

            n = n*n;

            for (int i = 1; i <= n; i++) {

                scanf("%d %d", &h, &v);

                if (!horisontales[h-1] && !verticales[v-1]) {

                    horisontales[h-1]=true;
                    verticales[v-1]=true;
                    printf("%d ", i);
                }
            }

            printf("\n");
     }

    return 0;
}
