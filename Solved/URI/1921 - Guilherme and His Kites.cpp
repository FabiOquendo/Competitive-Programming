// Name        : 1921 - Guilherme and His Kites.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1921
//============================================================

#include <bits/stdc++.h>

#define MAX_N 100001

using namespace std;

long long dp[MAX_N];

void bottomUp() {

    dp[0] = 0; dp[1] = 0;
    dp[2] = 0; dp[3] = 0;

    for(long i = 4; i < MAX_N; i++) {

        dp[i] = dp[i-1] + (i-2);
    }
}

int main() {

    bottomUp();
    long n;

    while(scanf("%ld", &n) == 1) {

        printf("%lld\n", dp[n]);
    }

    return 0;
}
