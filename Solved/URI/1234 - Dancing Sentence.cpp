//============================================================
// Name        : 1234 - Dancing Sentence.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 1234
//============================================================

#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string line;
    bool upper, flag;

    while(getline(cin, line)) {

        upper = false; flag = false;

        for (int i = 0; i < line.size(); i++) {

            if (isalpha(line[i]) && !flag) {

                printf("%c", toupper(line[i]));
                upper = true; flag = true;

            } else if (isalpha(line[i]) && upper) {

                printf("%c", tolower(line[i]));
                upper = false;

            } else if (isalpha(line[i]) && !upper) {

                printf("%c", toupper(line[i]));
                upper = true;

            } else {

                printf("%c", line[i]);
            }
        }

        printf("\n");
    }

    return 0;
}
