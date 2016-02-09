//============================================================
// Name        : 1024 - Encryption.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 1024
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
    string line;
    char c;

    n = next_int();

    while(n--) {

        getline(cin, line);

        tam = line.size();

        for(int i=0; i < tam; i++) {

            c = line[i];

            if (isalpha(c)) {

                line[i] = c+3;

            }
        }

        reverse(line.begin(), line.end());

        for (int i = tam/2; i < tam; i++) {

            c = line[i];
            line[i] = c-1;
        }

        cout << line << endl;
    }

    return 0;
}
