//============================================================
// Name        : 520B - Two Buttons.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Author      : Julio Cesar Garcia Sabogal
// Author      : Cristian Daniel Palechor Sepulveda
// Description : Programming Problems Codeforces
// Number	   : 520B
//============================================================

#include <bits/stdc++.h>

using namespace std;

map<int, int> nivel;
map<int, bool> visitados;

int n, m;

int bfs (int n) {

    queue<int> cola;
    cola.push(n);

    while(!cola.empty()) {

        int u = cola.front();
        cola.pop();

        if (visitados[u]) {

            continue;
        }

        visitados[u]=true;

        if(u==m){

            return nivel[u];
        }

        int u1=u-1,u2=u*2;

        if(nivel[u1]==0 && u1>0) {

            cola.push(u1);
            nivel[u1]= nivel[u]+1;
        }

        if(nivel[u2]==0 & u1<=10000) {

            cola.push(u2);
            nivel[u2]= nivel[u]+1;
        }
    }
}


int main() {

    while (scanf("%d %d", &n, &m) == 2) {

        printf("%d\n", bfs(n));

        nivel.clear();
        visitados.clear();
    }

    return 0;
}
