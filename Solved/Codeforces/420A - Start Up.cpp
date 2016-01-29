//============================================================
// Name        : 420A - Start Up.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 420A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    char espejo[] = "AHIMOTUVWXY";

    string line;

    bool flag;

    int aux, tam;

    while(cin >> line) {

        flag = true;
        aux = 0;
        tam = line.size();

        for(int i=0; i < line.size(); i++) {

            for(int j=0; j < strlen(espejo); j++) {

                if (line[i] == espejo[j]) {

                    aux++;
                    break;
                }
            }
        }

        if (aux == tam) {

            string lineAux = line;

            reverse(lineAux.begin(), lineAux.end());

            if (lineAux == line) {

                printf("YES\n");

            } else {

               printf("NO\n");
            }

        } else {

            printf("NO\n");
        }
    }

    return 0;
}
