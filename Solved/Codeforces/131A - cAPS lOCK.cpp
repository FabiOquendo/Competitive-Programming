//============================================================
// Name        : 131A - cAPS lOCK.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 131A
//============================================================

#include <stdio.h>
#include <cstring>

using namespace std;

int main() {

    char word [101];
    int tam;
    bool mayus;

    while (scanf("%s", &word) == 1) {

        mayus = true;

        tam = strlen(word);

        for (int i = 1; i < tam; i++) {

            if (!(word[i] >= 65 && word[i] <= 90)) {

                mayus = false;
            }

            if (!mayus) {

                printf("%s\n", word);
                break;
            }
        }

        if (mayus) {

            if (word[0] >= 65 && word[0] <= 90) {

                printf("%c", word[0]+32);

            } else {

                printf("%c", word[0]-32);
            }

            for (int i = 1; i < tam; i++) {

                printf("%c", word[i]+32);
            }

            printf("\n");
        }
    }

    return 0;
}

