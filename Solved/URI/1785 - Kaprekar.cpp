//============================================================
// Name        : 1785 - Kaprekar.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1039
//============================================================

#include <bits/stdc++.h>

using namespace std;

int visitados[10000];

int highest_number_with_digits_of(int x) {

    int i = 0, res = 0;

    priority_queue<int> q;

    while(x) {

        q.push(x%10);
        x /= 10;
    }

    while(!q.empty() || i < 4) {

        if (!q.empty()) {

            res += q.top();
            q.pop();
        }

        res *= 10;
        i++;
    }

    return res/10;
}

int lowest_number_with_digits_of(int x) {

    int res = 0;
    bool flag = false;
    priority_queue<int, vector<int>, greater<int> > q;

    while(x) {

        q.push(x%10);
        x /= 10;
    }

    while(!q.empty()) {

        if(q.top() != 0) flag = true;

        if(flag) {

            res += q.top();
            res *= 10;
        }

        q.pop();

    }

    return res/10;

}

int krapekar(int x) {

   int cnt = 0;

   while (x != 6174) {

       int hi = highest_number_with_digits_of(x);

       int lo = lowest_number_with_digits_of(x);

       x = hi - lo;

       if (visitados[x] == -1) {

            visitados[x] = x;
            cnt = cnt + 1;

       } else {

            cnt = -1;
            break;
       }
   }

   return cnt;

}

int main(){

    int t, x, cases=1;

    scanf("%d", &t);

    while(t--) {

        memset(visitados, -1, sizeof visitados);

        scanf("%d", &x);

        printf("Caso #%d: %d\n", cases++, krapekar(x));

    }

    return 0;
}

