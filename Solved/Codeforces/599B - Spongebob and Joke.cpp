//============================================================
// Name        : 599B - Spongebob and Joke.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number      : 599B
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    long int n, m, aux, counter, index;
    bool flag;

    while (scanf("%ld %ld", &n, &m) == 2) {

        map<long int, long int> f;
        map<long int, long int> pos;
        long int b[m];
        long int a[m];

        flag = true;

        for (long int i=0; i < n; i++) {

            scanf("%ld", &aux);
            f[aux]++;
            pos[aux] = i+1;
        }

        for (long int i=0; i < m; i++) {

            scanf("%ld", &b[i]);
        }

        for (long int i=0; i < m; i++) {

            aux = b[i];
            counter = 0;

            counter = f[aux];
            index = pos[aux];

            if (counter == 0) {

                printf("Impossible\n");
                flag = false;
                break;

            } else if (counter > 1) {

                flag = false;
                continue;

            } else {

                a[i] = index;
            }
        }

        if (flag) {

            printf("Possible\n");

            for (long int i=0; i < m-1; i++) {

                printf("%ld ", a[i]);
            }

            printf("%ld\n", a[m-1]);

        } else {

             if (counter!=0) printf("Ambiguity\n");
        }
    }

    return 0;
}
