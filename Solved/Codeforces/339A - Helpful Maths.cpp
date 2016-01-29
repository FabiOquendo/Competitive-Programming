//============================================================
// Name        : 339A - Helpful Maths.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 339A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    char line [101];

    int tam, sizeMap, cant;

    while (scanf("%s", &line) == 1) {

        map<char, int> numeros;

        tam = strlen(line);

        char res [tam];

        if(tam == 1) {

            printf("%s\n", line);

        } else {

            for (int i=0; i < tam; i+=2) {

                numeros[line[i]]++;
            }

            map<char, int>::iterator it;
            it = numeros.begin();

            sizeMap = numeros.size();

            while (sizeMap--) {

                cant = (*it).second;

                while (cant--) {

                    if (sizeMap == 0 && cant ==0) {

                        printf("%c\n", (*it).first);

                    } else {

                        printf("%c+", (*it).first);
                    }
                }

                it++;
            }
        }
    }

    return 0;
}
