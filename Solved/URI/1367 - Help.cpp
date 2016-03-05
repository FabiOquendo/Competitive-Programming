//============================================================
// Name        : 1367 - Help.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1367
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

    int n, t, res, time;
    char c;
    string line, word;

    n = next_int();

    while (n != 0) {

        res = 0; time = 0;
        map<char, int> intentos;

        while (n--) {

            getline(cin, line);
            stringstream ss(line);
            ss >> c >> t >> word;

            if (word == "incorrect") {

                intentos[c]++;

            } else {

                res++;
                time += intentos[c]*20;
                time += t;
            }
        }

        cout << res << " " << time << endl;

        n = next_int();
    }

    return 0;
}
