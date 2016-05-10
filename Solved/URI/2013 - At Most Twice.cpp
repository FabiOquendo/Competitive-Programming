//============================================================
// Name        : 2013 - At Most Twice.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 2013
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    char u[20];

    int ns[10];

    int aux, index;

    bool flag;

    while(scanf("%s", &u) == 1) {

        memset(ns, 0, sizeof ns);

        index = -1;

        for (int i=0; i<strlen(u); i++) {

            aux = u[i]-48;
            ns[aux]++;

            if (ns[aux] > 2) {

                index = i;
                break;
            }
        }

        if (index == -1) {

            printf("%s\n", u);
            continue;
        }

        flag = false;

        for (int i = index; i >= 0; i--) {

            aux = u[i]-48;
            for (int j = aux-1; j >= 0; j--) {

                if (ns[j] < 2) {

                    u[i] = j+48;
                    ns[j]++;
                    ns[aux]--;
                    flag = true;
                    break;
                }
            }

            if (flag) {

                index = i;
                break;
            }

            ns[aux]--;
        }

        index++;

        for (int i = index; i < strlen(u); i++) {

            for (int j = 9; j >= 0; j--) {

                if (ns[j] < 2) {

                    u[i] = j+48;
                    ns[j]++;
                    break;
                }
            }
        }

        for (int i = 0; i < strlen(u); i++) {

            if (i == 0 && u[i] == '0') continue;

            printf("%c", u[i]);
        }

        printf("\n");
    }

    return 0;
}
