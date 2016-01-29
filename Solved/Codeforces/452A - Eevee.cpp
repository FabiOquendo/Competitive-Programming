//============================================================
// Name        : 452A - Eevee.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number      : 452A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    while(scanf("%d", &n) == 1) {

        char line[n];

        scanf("%s", &line);

        if (n == 8) {

            printf("vaporeon\n");

        } else if (n == 6) {

            printf("espeon\n");

        } else {

            if (line[0] == 'j') {

                printf("jolteon\n");

            } else if (line[1] == 'o') {

                printf("jolteon\n");

            } else if(line[3] == 't') {

                printf("jolteon\n");

            } else if (line[0] == 'f') {

                printf("flareon\n");

            } else if (line[0] == 'u') {

                printf("umbreon\n");

            } else if(line[1] == 'm') {

                printf("umbreon\n");

            } else if (line[2] == 'b') {

                printf("umbreon\n");

            } else if (line[0] == 'l') {

                printf("leafeon\n");

            } else if(line[1] == 'e') {

                printf("leafeon\n");

            } else if(line[3] == 'f') {

                printf("leafeon\n");

            } else if (line[0] == 'g') {

                printf("glaceon\n");

            } else if(line[3] == 'c') {

                printf("glaceon\n");

            } else if (line[0] == 's') {

                printf("sylveon\n");

            } else if(line[1] == 'y') {

                printf("sylveon\n");

            } else if(line[3] == 'v') {

                printf("sylveon\n");

            } else if(line[2] == 'l' && (line[0] == 'j' || line[1] == 'o' || line[3] == 't')) {

                printf("jolteon\n");

            } else if(line[1] == 'l' && (line[0] == 'f' || line[2] == 'a' || line[3] == 'r')) {

                printf("flareon\n");

            } else if(line[2] == 'a' && (line[0] == 'f' || line[1] == 'l' || line[3] == 'r')) {

                printf("flareon\n");

            } else if(line[3] == 'r' && (line[0] == 'f' || line[1] == 'l' || line[2] == 'a')) {

                printf("flareon\n");

            } else if(line[3] == 'r' && (line[0] == 'u' || line[1] == 'm' || line[2] == 'b')) {

                printf("umbreon\n");

            } else if(line[2] == 'a' && (line[0] == 'l' || line[1] == 'e' || line[3] == 'f')) {

                printf("leafeon\n");

            } else if(line[2] == 'a' && (line[0] == 'g' || line[1] == 'l' || line[3] == 'c')) {

                printf("glaceon\n");

            } else if(line[1] == 'l' && (line[0] == 'g' || line[2] == 'a' || line[3] == 'c')) {

                printf("glaceon\n");

            } else if(line[2] == 'l' && (line[0] == 's' || line[1] == 'y' || line[3] == 'v')) {

                printf("sylveon\n");
            }
        }
    }

    return 0;
}
