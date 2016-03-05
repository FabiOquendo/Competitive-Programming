//============================================================
// Name        : 1607 - Advancing Letters.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1607
//============================================================

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int next_int() {

    string line; getline(cin, line);
    return atoi(line.c_str());
}

int compararLetras(char a, char b) {

    if (a <= b) {

       return b-a;

    } else {

        return ('z'-a) + (b-96);
    }
}

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, res;
    string line, A, B;

    n = next_int();

    while(n--) {

        getline(cin, line);
        stringstream ss(line);
        ss >> A >> B;

        res = 0;

        for(int i=0; i<A.size(); i++) {

            res += compararLetras(A[i], B[i]);
        }

        cout << res << endl;
    }

    return 0;
}
