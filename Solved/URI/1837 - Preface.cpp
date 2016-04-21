//============================================================
// Name        : 1837 - Preface.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1837
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, q, r;

    while(scanf("%d %d", &a, &b) == 2) {

        q = a/b;
        r = a-(q*b);

        while(r < 0) {

            if(b < 0) {

                q++;
                r -= b;

            } else {

                q--;
                r += b;
            }
        }

        printf("%d %d\n", q, r);
    }

    return 0;
}
