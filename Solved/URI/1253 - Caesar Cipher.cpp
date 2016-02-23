//============================================================
// Name        : 1253 - Caesar Cipher.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1253
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

    int n, s, aux;
    string line, res;

    n = next_int();

    while(n--) {

        getline(cin, line);
        s = next_int();
        res = "";

        for(int i = 0; i<line.size(); i++) {

            aux = line[i]-s;

            if (aux < 65) {

                aux = 65-aux;
                res += 91-aux;

            } else {

                res += aux;
            }
        }

        cout << res << endl;
    }

    return 0;
}
