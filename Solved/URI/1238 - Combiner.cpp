//============================================================
// Name        : 1238 - Combiner.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1238
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

    int n, size1, size2, i;
    string line, word1, word2, res;

    n = next_int();

    while(n--) {

        getline(cin, line);
        stringstream ss(line);
        ss >> word1 >> word2;

        size1 = word1.size();
        size2 = word2.size();
        i = 0;
        res = "";

        if (size1 >= size2) {

            for(; i<size2; i++) {

                res += word1[i];
                res += word2[i];
            }

            for(; i<size1; i++) {

                res += word1[i];
            }

        } else {

             for(; i<size1; i++) {

                res += word1[i];
                res += word2[i];
            }

            for(; i<size2; i++) {

                res += word2[i];
            }
        }

        cout << res << endl;
    }

    return 0;
}
