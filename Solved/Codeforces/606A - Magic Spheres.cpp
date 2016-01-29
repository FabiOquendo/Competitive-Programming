//============================================================
// Name        : 606A - Magic Spheres.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems Codeforces
// Number	   : 606A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {


    long int a, b, c, x, y, z, aux;

    while(scanf("%ld %ld %ld", &a, &b, &c) == 3) {

        scanf("%ld %ld %ld", &x, &y, &z);

        aux = 0;

        while(a > x) {

            if (a >= 2) {

                a-=2;
                aux++;

            } else {

                a--;
            }
        }

        while(b > y) {

            if (b >= 2) {

                b-=2;
                aux++;

            } else {

                b--;
            }
        }

        while(c > z) {

            if (c >= 2) {

                c-=2;
                aux++;

            } else {

                c--;
            }
        }

        while (a < x && aux > 0) {

            a++;
            aux--;
        }

        while (b < y && aux > 0) {

            b++;
            aux--;
        }

        while (c < z && aux > 0) {

            c++;
            aux--;
        }

        if (a == x && b == y && c == z) {

            printf("Yes\n");

        } else {

            printf("No\n");
        }
    }

    return 0;
}
