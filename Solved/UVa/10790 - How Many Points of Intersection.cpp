//============================================================
// Name        : 10790 - How Many Points of Intersection.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems UVa
// Number	   : 10790
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, cases=1;

    long long int res;

    scanf("%d %d", &a, &b);

    while(a != 0 && b != 0) {

        res = (long long) a*(a-1)/2 * b*(b-1)/2;

        printf("Case %d: %lld\n", cases++, res);

        scanf("%d %d", &a, &b);
    }

    return 0;
}
