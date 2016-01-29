//============================================================
// Name        : 570A - Elections.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 570A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m, auxIndex, res;
    long int aux, voto, city;

    while(scanf("%d %d", &n, &m) == 2) {

        int candidates [n];

        for (int i=0; i<n; i++) {

            candidates[i]=0;
        }

        for (int i=0; i<m; i++) {

            aux = 0;
            auxIndex = 0;

            for (int j=0; j<n; j++) {

                scanf("%ld", &voto);

                if (voto > aux) {

                    aux = voto;
                    auxIndex = j;
                }
            }

            candidates[auxIndex]++;
        }

        res = 0;
        city = 0;

        for (int i=0; i<n; i++) {

            if (city < candidates[i]) {

                city = candidates[i];
                res = i+1;
            }
        }

        printf("%d\n", res);
    }

    return 0;
}
