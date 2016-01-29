//============================================================
// Name        : 71A - Way Too Long Words.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 71A
//============================================================

#include <stdio.h>
#include <cstring>

using namespace std;

int main() {

    int n, l;
    char word [101];

    scanf("%d", &n);

    while (n--) {

        scanf("%s", &word);

        l = strlen(word);

		if (l <= 10) {

            printf("%s\n", word);

        } else {

            printf("%c%d%c\n", word[0], l-2, word[l-1]);
        }
    }

    return 0;
}
