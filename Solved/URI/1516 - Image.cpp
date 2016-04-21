//============================================================
// Name        : 1516 - Image.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1516
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m, a ,b, x, y;
    char line[51];
    char image[51][51];

    scanf("%d %d", &n, &m);

    while(m != 0 && n != 0) {

        for(int i = 0; i < n; i++) {

            scanf("%s", &line);

            for(int j = 0; j < m; j++) {

                image[i][j] = line[j];
            }
        }

        scanf("%d %d", &a, &b);

        x = a/n; y = b/m;

        for(int i = 0; i < n; i++) {

            for(int l = 0; l < x; l++) {

                for(int j = 0; j < m; j++) {

                    for(int k = 0; k < y; k++) {

                        printf("%c", image[i][j]);
                    }
                }

                printf("\n");
            }
        }

        printf("\n");

        scanf("%d %d", &n, &m);
    }

    return 0;
}
