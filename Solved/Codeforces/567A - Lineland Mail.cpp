//============================================================
// Name        : 567A - Lineland Mail.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 567A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    long int n, mini, maxi, mn1, mn2, mx1, mx2;

    while (scanf("%ld", &n) == 1) {

        long int points [n];

        for (int i=0; i<n; i++) {

            scanf("%ld", &points[i]);
        }

        for (int i=0; i<n; i++) {

            if (i == 0) {

                mini = abs(points[i]-points[i+1]);
                maxi = abs(points[i]-points[n-1]);

            } else if (i == n-1) {

                mini = abs(points[i-1]-points[i]);
                maxi = abs(points[i]-points[0]);

            } else {

                mn1 = abs(points[i-1]-points[i]);
                mn2 = abs(points[i]-points[i+1]);

                mini = (mn1 < mn2) ? mn1 : mn2;

                mx1 = abs(points[i]-points[0]);
                mx2 = abs(points[i]-points[n-1]);

                maxi = (mx1 > mx2) ? mx1 : mx2;
            }

            printf("%ld %ld\n", mini, maxi);
        }
    }

    return 0;
}
