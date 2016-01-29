//============================================================
// Name        : 37A - Towers.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number      : 37A
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, aux;
    map<int,int> mapa;

    while(scanf("%d", &n) == 1) {

        while(n--) {

            scanf("%d", &aux);
            mapa[aux]++;
        }

         map<int, int>::iterator it;
         it = mapa.begin();
         aux = 0;

         while(it!=mapa.end()) {

            aux = max(aux, (*it).second);
            it++;
         }

        printf("%d %d", aux, mapa.size());
    }

    return 0;
}
