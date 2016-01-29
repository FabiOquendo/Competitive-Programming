//============================================================
// Name        : 581A - Vasya the Hipster.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems Codeforces
// Number	   : 581A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {


    int a, b;

    while(scanf("%d %d", &a, &b) == 2) {

        printf("%d %d\n", min(a, b), abs((a-b)/2));
    }

    return 0;
}
