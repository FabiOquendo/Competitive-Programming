//============================================================
// Name        : 1550 - Inversion.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1550
//============================================================

#include <bits/stdc++.h>

using namespace std;

map<int, int> nivel;
map<int, bool> visitados;

int n, m;

int inversion(int x) {

    int aux, res = 0, i = 10;

    while(x > 0) {

        res += x%10;
        x /= 10;
        res *= i;
    }

    return res/10;
}

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

        int u1=u+1;
        int u2= inversion(u);

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

    int t;

    scanf("%d", &t);

    while (t--) {

        scanf("%d %d", &n, &m);

        printf("%d\n", bfs(n));

        nivel.clear();
        visitados.clear();
    }

    return 0;
}
