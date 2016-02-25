//============================================================
// Name        : 1340 - I Can Guess the Data Structure.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1340
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, type, x;
    bool colaP, cola, pila;

    while(scanf("%d", &n) == 1) {

        priority_queue<int> pq;
        queue<int> q;
        stack<int> s;
        colaP = true;
        cola = true;
        pila = true;

        while(n--) {

            scanf("%d %d", &type, &x);

            if(type == 1) {

                pq.push(x);
                q.push(x);
                s.push(x);

            } else {

                if(colaP && pq.top() == x) {

                    pq.pop();

                } else {

                    colaP = false;
                }

                if(cola && q.front() == x) {

                    q.pop();

                } else {

                    cola = false;
                }

                if(pila && s.top() == x) {

                    s.pop();

                } else {

                    pila = false;
                }
            }
        }

        if((colaP&&cola) || (colaP&&pila) || (pila&&cola) || (colaP&&cola&&pila)) {

            printf("not sure\n");

        } else if(colaP) {

            printf("priority queue\n");

        } else if(cola) {

            printf("queue\n");

        } else if(pila) {

            printf("stack\n");

        } else {

            printf("impossible\n");
        }
    }

    return 0;
}
