//============================================================
// Name        : 1245 - Lost Boots.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1245
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m, mini, maxi, res;
    char l;

    while(scanf("%d", &n) == 1) {

        map<int, int> bootD;
        map<int, int> bootE;
        mini = 60; maxi = 30;

        while(n--) {

            scanf("%d %c", &m, &l);

            mini = min(mini, m);
            maxi = max(maxi, m);

            if (l == 'D') {

                bootD[m]++;

            } else {

                bootE[m]++;
            }
        }

        res = 0;

        for(int i = mini; i <= maxi; i++) {

            res += min(bootD[i], bootE[i]);
        }

        printf("%d\n", res);
    }

    return 0;
}
