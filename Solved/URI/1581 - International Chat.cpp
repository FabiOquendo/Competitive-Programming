//============================================================
// Name        : 1581 - International Chat.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1581
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

    int n, k;
    string language, aux;
    bool flag;
    n = next_int();

    while(n--) {

        k = next_int();
        getline(cin, language);
        k--;
        flag = true;

        while(k--) {

            getline(cin, aux);

            if (language!=aux) flag = false;
        }

        if (flag) {

            cout << language << endl;

        } else {

            cout << "ingles" << endl;
        }
    }

    return 0;
}
