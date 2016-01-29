//============================================================
// Name        : 32B - Borze.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number      : 32B
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    char line[201];

    while(scanf("%s", &line) == 1) {

        for(int i = 0; i < strlen(line); i++) {

            if(line[i] == '-' && i+1 <strlen(line)) {

                if(line[i+1] == '-') {

                    printf("2");

                } else if(line[i+1] == '.') {

                    printf("1");
                }

                i++;

            } else if(line[i] == '.') {

                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}
