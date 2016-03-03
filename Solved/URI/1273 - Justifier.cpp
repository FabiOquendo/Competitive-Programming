//============================================================
// Name        : 1273 - Justifier.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1273
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

    int n, maxSize, aux;
    string line;
    vector<string> lines;

    n = next_int();

    while(n != 0) {

        maxSize = 0;

        while(n--) {

            getline(cin, line);
            maxSize = max((int)line.size(), maxSize);
            lines.push_back(line);
        }

        for(int i=0; i<lines.size(); i++) {

            line = lines[i];

            if (line.size() != maxSize) {

                aux = maxSize - line.size();

                while(aux--) cout << " ";
            }

            cout << line << endl;
        }

        lines.clear();

        n = next_int();

        if (n) cout << endl;
    }

    return 0;
}
