//============================================================
// Name        : 118A - String Task.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 118A
//============================================================

#include <stdio.h>
#include <cstring>

using namespace std;

int main() {

    char word [101];

    while (scanf("%s", &word) == 1) {

		for (int i = 0; i < strlen(word); i++) {

            if (!(word[i] == 'A'|| word[i] == 'E' || word[i] == 'I' ||
                word[i] == 'O' || word[i] == 'U' || word[i] == 'Y' ||
                word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
                word[i] == 'o' || word[i] == 'u' || word[i] == 'y')) {

                if (word[i] >= 65 && word[i] <= 90) {

                    printf(".%c", word[i]+32);

                } else {

                    printf(".%c", word[i]);
                }
            }
		}

		printf("\n");
    }

    return 0;
}

