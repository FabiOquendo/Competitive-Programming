//============================================================
// Name        : 1171 -Number Frequence.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1171
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, x;
    map<int, int> xs;

    scanf("%d", &n);

    while(n--) {

        scanf("%d", &x);

        xs[x]++;
    }

    map<int, int>::iterator it;
    it = xs.begin();

    while(it != xs.end()) {

        printf("%d aparece %d vez(es)\n", (*it).first, (*it).second);
        it++;
    }

    return 0;
}
