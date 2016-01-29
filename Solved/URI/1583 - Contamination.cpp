//============================================================
// Name        : 1583 - Contamination.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1583
//============================================================

#include <bits/stdc++.h>

using namespace std;

char matriz [51][51];
vector< pair<int,int> > listaT;
int n, m;

bool valido (int x, int y) {

    if (x>=0 && x<n && y>=0 && y<m) {

        if (matriz[x][y] == 'A') {

            return true;
        }
    }

    return false;
}

int bfs () {

    queue< pair<int,int> > cola;

    while (!listaT.empty()) {

        cola.push(listaT.back());
        listaT.pop_back();
    }

    int res = 1;

    while (!cola.empty()) {

        pair<int,int> par = cola.front();
        int x1 = par.first;
        int y1 = par.second;
        cola.pop();

        if (valido(x1-1, y1)) {

            matriz[x1-1][y1] = 'T';
            cola.push(pair<int,int>(x1-1,y1));
            res++;
        }

        if (valido(x1+1, y1)) {

            matriz[x1+1][y1] = 'T';
            cola.push(pair<int,int>(x1+1,y1));
            res++;
        }

        if (valido(x1, y1-1)) {

            matriz[x1][y1-1] = 'T';
            cola.push(pair<int,int>(x1,y1-1));
            res++;
        }

        if (valido(x1, y1+1)) {

            matriz[x1][y1+1] = 'T';
            cola.push(pair<int,int>(x1,y1+1));
            res++;
        }
    }

    return res;
}

int main() {

    int w1, h1, res;

    scanf("%d %d", &n, &m);

    while (n != 0 && m != 0) {

        for (int i=0; i<n; i++) {

            for (int j=0; j<m; j++) {

                scanf(" %c", &matriz[i][j]);

                if (matriz[i][j] == 'T') {

                    listaT.push_back(pair<int,int>(i,j));
                }
            }
        }

        res = bfs();

        for (int i=0; i<n; i++) {

            for (int j=0; j<m; j++) {

                printf("%c", matriz[i][j]);
            }

            printf("\n");
        }

        printf("\n");

        listaT.clear();

        scanf("%d %d", &n, &m);
    }

    return 0;
}
