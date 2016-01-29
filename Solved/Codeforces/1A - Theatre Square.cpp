//============================================================
// Name        : 1A - Theatre Square.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number      : 1A
//============================================================

#include <stdio.h>
#include <math.h>

using namespace std;

int main() {

    int n, m, a;

    while(scanf ("%d %d %d", &n, &m, &a) == 3) {

        // CEIL: redondea un double siempre por encima.
        printf ("%0.lf\n", ceil(n / (double) a) * ceil (m / (double) a));

    }

    return 0;
}
