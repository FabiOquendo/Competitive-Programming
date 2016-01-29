//============================================================
// Name        : 583B - Robot's Task.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 583B
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, aux, info, res;
    bool dir;

    while (scanf("%d", &n) == 1) {

        int ns[n];
        bool visit[n];
        memset(visit, false, sizeof visit);
        info = 0;
        res = 0;
        dir = true;

        for(int i=0; i<n; i++) {

            scanf("%d", &aux);
            ns[i]=aux;
        }

        aux = n;

        while (n>0) {

            if (dir) {

                for (int i=0; i<aux; i++){

                    if (ns[i] <= info && !visit[i]) {

                        info++;
                        n--;
                        visit[i]=true;
                    }
                }
                dir = false;
                if (n>0) res++;

            } else {

                for (int i=aux-1; i>=0; i--){

                    if (ns[i] <= info && !visit[i]) {

                        info++;
                        n--;
                        visit[i]=true;
                    }
                }
                dir = true;
                if (n>0) res++;
            }
        }

        printf("%d\n", res);
    }

    return 0;
}
