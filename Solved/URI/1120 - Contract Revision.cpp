//============================================================
// Name        : 1120 - Contract Revision.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 1120
//============================================================

#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main() {

    char d;
    string n, res;
    bool flag;

    cin >> d >> n;

    while(d != '0' && n != "0") {

        flag = false;
        res = "";

        for (int i = 0; i < n.size(); i++) {

            if (n[i] != d) {

                if (n[i] == '0') {

                    if (flag) {

                        res += n[i];
                    }

                } else {

                    res += n[i];
                    flag = true;
                }

            }
        }

        if (res == "") {

            res = "0";
        }

        cout << res << endl;

        cin >> d >> n;
    }

    return 0;
}
