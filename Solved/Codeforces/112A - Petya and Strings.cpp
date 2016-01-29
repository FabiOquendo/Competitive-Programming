//============================================================
// Name        : 112A - Petya and Strings.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number      : 112A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    char word1 [101];
    char word2 [101];
    int res;

    while (scanf("%s", &word1) == 1) {

        scanf("%s", &word2);

        res = 0;

        for (int i=0; i < strlen(word1); i++) {

            // toupper: convierte un caracter en mayuscula
            // tolower: convierte un caracter en minuscul
            if (tolower(word1[i]) > tolower(word2[i])) {

                printf("1\n");
                res = 1;
                break;

            } else if (tolower(word1[i]) < tolower(word2[i])) {

                printf("-1\n");
                res = -1;
                break;
            }
        }

		if (res == 0) {

            printf("0\n");
		}
    }

    return 0;
}
