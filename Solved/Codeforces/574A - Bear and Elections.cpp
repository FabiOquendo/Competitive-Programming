//============================================================
// Name        : 574A - Bear and Elections.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 574A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, w, aux, res;

    while(scanf("%d", &n) == 1) {

        priority_queue<int> cola;
        res=0;
        scanf("%d", &w);

        for(int i=1; i < n; i++) {

            scanf("%d", &aux);
            cola.push(aux);
        }

        aux = cola.top();
        cola.pop();

        while (w <= aux) {

            w++;
            aux--;
            cola.push(aux);
            res++;
            aux = cola.top();
            cola.pop();
        }

        printf("%d\n", res);
    }

    return 0;
}
