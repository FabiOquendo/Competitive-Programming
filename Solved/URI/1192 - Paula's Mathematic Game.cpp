//============================================================
// Name        : 1192 - Paula's Mathematic Game.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1192
//============================================================

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int next_int() {

    string line; getline(cin, line);
    return atoi(line.c_str());
}

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, a, b, res;
    char l;
    string line;

    n = next_int();

    while(n--) {

        getline(cin, line);
        stringstream ss(line);
        ss >> a >> l >> b;

        if (a == b) {

            res = a*b;

        } else if (islower(l)) {

            res = a+b;

        } else if (isupper(l)) {

            res = b-a;
        }

        cout << res << endl;
    }

    return 0;
}
