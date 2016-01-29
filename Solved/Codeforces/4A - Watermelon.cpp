//============================================================
// Name        : 4A - Watermelon.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 4A
//============================================================

#include <stdio.h>

using namespace std;

int main() {

    int w;

    while(scanf("%d", &w) == 1) {

        if (w != 2 && w % 2 == 0) {

            printf("YES\n");

        } else {

            printf("NO\n");
        }
    }

    return 0;
}
