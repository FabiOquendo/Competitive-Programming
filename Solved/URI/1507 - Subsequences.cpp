//============================================================
// Name        : 1507 - Subsequences.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1507
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

    int cases, q, res;
    string line, sub;

    cases = next_int();

    while (cases--) {

        getline(cin, line);

        q = next_int();

        while(q--) {

            getline(cin, sub);

            int j = 0; res = 0;

            for(int i = 0; i<sub.size(); i++) {

                for(;j<line.size(); j++) {

                    if(sub[i] == line[j]) {

                        res++;
                        j++;
                        break;
                    }
                }
            }

            if(res == sub.size()) {

                cout << "Yes" << endl;

            } else {

                cout << "No" << endl;
            }
        }
    }

    return 0;
}
