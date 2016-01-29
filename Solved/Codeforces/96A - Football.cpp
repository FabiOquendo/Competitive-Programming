//============================================================
// Name        : 96A - Football.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 96A
//============================================================

#include <stdio.h>
#include <cstring>

using namespace std;

int main() {

    char line [101];

    bool ones;

    int total, res;

    while (scanf("%s", &line) == 1) {

        res = 0;

        if (line[0] == '1') {

            ones = true;

        } else {

            ones = false;
        }

        total = 1;

        for (int i=1; i < strlen(line); i++) {

            if (line[i] == '1' && ones) {

                total++;

            } else if (line[i] == '0' && !ones) {

                total++;

            } else if (line[i] == '1' && !ones) {

                if (res < total) {

                    res = total;
                }

                total = 1;
                ones = true;

            } else if (line[i] == '0' && ones) {

                if (res < total) {

                    res = total;
                }

                total = 1;
                ones = false;
            }
        }

        if (res < total) {

            res = total;
        }

        if (res >= 7) {

            printf("YES\n");

        } else {

            printf("NO\n");
        }

    }

    return 0;
}
