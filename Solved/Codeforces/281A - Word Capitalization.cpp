//============================================================
// Name        : 281A - Word Capitalization.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 281A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    char word [1001];

    while (scanf("%s", &word) == 1) {

        if (word[0] > 96) {

            word[0] = word[0]-32;
        }

        printf("%s\n", word);
    }

    return 0;
}


