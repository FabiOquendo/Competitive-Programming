//============================================================
// Name        : 1259 - Even and Odd.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 1259
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, t;

    while(scanf("%d", &n) == 1) {

        priority_queue<int, vector<int>, greater<int> > even;
        priority_queue<int> odd;

        while(n--) {

            scanf("%d", &t);

            if(t%2 == 0) {

                even.push(t);

            } else {

                odd.push(t);
            }
        }

        while(!even.empty()) {

            printf("%d\n", even.top());
            even.pop();
        }

        while(!odd.empty()) {

            printf("%d\n", odd.top());
            odd.pop();
        }
    }

    return 0;
}
