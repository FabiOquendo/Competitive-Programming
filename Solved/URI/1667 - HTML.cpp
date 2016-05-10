//============================================================
// Name        : 1667 - HTML.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1667
//============================================================

#include <bits/stdc++.h>

using namespace std;

#define hr "--------------------------------------------------------------------------------"
#define endl '\n'

int main() {

    int index=0, tam;
    string word;

    while(cin >> word) {

        tam = word.size();

        if (word == "<br>") {

            cout << endl;
            index = 0;

        } else if (word == "<hr>") {

            if(index != 0) cout << endl;
            cout << hr;
            cout << endl;
            index = 0;

        } else if (index == 0 && tam <= 80) {

            cout << word;
            index = tam;

        } else if (index != 0 && index+tam < 80) {

            cout << " ";
            index++;
            cout << word;
            index += tam;

        }else {

            cout << endl;
            cout << word;
            index = tam;
        }
    }

    cout << endl;

    return 0;
}
