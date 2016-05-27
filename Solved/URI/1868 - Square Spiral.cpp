//============================================================
// Name        : 1868 - Square Spiral.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1868
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x, y, m, c, aux, g;
    char square[30][30];
    bool u, d, l, r;

    scanf("%d", &n);

    while(n != 0) {

        memset(square, 'O', sizeof square);

        u = false; d = false;
        l = false, r = true;

        x = n/2; y = n/2;
        m = 1; c = 0; aux = 0;
        g = 1;

        square[x][y] = 'X';

        for(int i = 0; i < n; i++) {

            for(int j = 0; j < n; j++) {

                printf("%c", square[j][i]);
            }

            printf("\n");
        }

        printf("@\n");

        while(x != n && y != n && g < n*n) {

            while(aux < m && g < n*n) {

                if(r) {

                    square[x][y] = 'O';
                    x++;
                    square[x][y] = 'X';

                } else if(u) {

                    square[x][y] = 'O';
                    y--;
                    square[x][y] = 'X';

                } else if(l) {

                    square[x][y] = 'O';
                    x--;
                    square[x][y] = 'X';

                } else if(d) {

                    square[x][y] = 'O';
                    y++;
                    square[x][y] = 'X';
                }

                for(int i = 0; i < n; i++) {

                    for(int j = 0; j < n; j++) {

                        printf("%c", square[j][i]);
                    }

                    printf("\n");
                }

                printf("@\n");

                aux++; g++;
            }

            aux = 0; c++;

            if (c == 2) {

                c = 0; m++;
            }

            if(r) {

                r = false; u = true;

            } else if(u) {

                u = false; l = true;

            } else if(l) {

                l = false; d = true;

            } else if(d) {

                d = false; r = true;
            }
        }

        scanf("%d", &n);
    }

    return 0;
}
