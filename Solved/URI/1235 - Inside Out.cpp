//============================================================
// Name        : 1235 - Inside Out.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 1235
//============================================================

#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int next_int() {

    string line; getline(cin, line);
    return atoi(line.c_str());
}

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, tam;
    string line, res;

    n = next_int();

    while(n--) {

        res = "";
        getline(cin, line);
        tam = line.size();

        for(int i = tam/2-1; i >= 0; i--) {

            res += line[i];
        }

        for(int i = tam-1; i >= tam/2; i--) {

            res += line[i];
        }

        cout << res << endl;
    }

    return 0;
}
