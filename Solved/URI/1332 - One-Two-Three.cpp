//============================================================
// Name        : 1332 - One-Two-Three.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1332
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

    int n, res;
    string line;

    n = next_int();

    while(n--) {

        getline(cin, line);

        if (line.size() == 5) {

            res = 3;

        } else if (line[0] == 'o' || line[1] == 'n' || line[2] == 'e') {

            res = 1;

        } else if (line[0] == 't' || line[1] == 'w' || line[2] == 'o') {

            res = 2;
        }

        cout << res << endl;
    }

    return 0;
}
