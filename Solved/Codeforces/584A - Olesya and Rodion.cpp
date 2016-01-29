//============================================================
// Name        : 584A - Olesya and Rodion.cpp
// Author      : UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number      : 584A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, t;

    while (scanf("%d %d", &n, &t) == 2) {

            if (t==10) {

                if (n==1) {

                    printf("-1\n");

                } else {

                    for (int i=0; i < n; i++) {

                        if (i == n-1) {

                            printf("0\n");

                        } else {

                            printf("1");
                        }
                    }
                }

            } else {

                for (int i=0; i < n; i++) {

                     printf("%d", t);
                }

                printf("\n");
            }

     }

    return 0;
}
