//============================================================
// Name        : 1241 - Fit or Dont Fit II.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1241
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

    int n, i, j;
    string line, A, B;
    bool flag;

    n = next_int();

    while (n--) {

        flag = true;

        getline(cin, line);
        stringstream ss(line);
        ss >> A >> B;

        i = A.size()-1;
        j = B.size()-1;

        for(; j >= 0; j--, i--) {

            if (A[i] != B[j]) flag = false;
        }

        if (!flag) {

            cout << "nao ";
        }

        cout << "encaixa" << endl;
    }

    return 0;
}
