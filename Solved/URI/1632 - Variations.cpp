//============================================================
// Name        : 1632 - Variations.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1632
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

    string pass;
    char c;
    int res, n = next_int();

    while (n--) {

        cin >> pass;
        res = 1;

        for(int i = 0; i < pass.size(); i++) {

            c = tolower(pass[i]);

            if (c == 'a' || c == 'e' || c == 'i' ||
                c == 'o' || c == 's') {

                res *= 3;

            } else {

                res *= 2;
            }
        }

        cout << res << endl;
    }

    return 0;
}
