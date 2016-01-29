//============================================================
// Name        : 7211 - Identifying tea.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems ACM-ICPC
// Number	   : 7211
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int t, a, b, c, d, e, res;

    while(scanf("%d", &t) == 1) {

        res = 0;

        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

        if (a == t) res++;
        if (b == t) res++;
        if (c == t) res++;
        if (d == t) res++;
        if (e == t) res++;

        printf("%d\n", res);
    }

    return 0;
}
