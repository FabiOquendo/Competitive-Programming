//============================================================
// Name        : 1257 - Array Hash.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1257
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

    int n, l, row, res;
    string line;

    n = next_int();

    while(n--) {

        row = 0; res = 0;

        l = next_int();

        while(l--) {

            getline(cin, line);

            for(int i = 0; i<line.size(); i++) {

                res += (line[i]-65) + i + row;
            }

            row++;
        }

        cout << res << endl;
    }

    return 0;
}
