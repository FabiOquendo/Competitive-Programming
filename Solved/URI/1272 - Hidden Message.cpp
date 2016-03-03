//============================================================
// Name        : 1272 - Hidden Message.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1272
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

    int n;
    string line, res;

    n = next_int();

    while(n--) {

        getline(cin, line);
        res = "";

        for(int i=0; i<line.size(); i++) {

            if(i == 0 && isalpha(line[i])) {

                res += line[i];

            } else if(isalpha(line[i]) && line[i-1] == ' ') {

                res += line[i];
            }
        }

        cout << res << endl;
    }


    return 0;
}
