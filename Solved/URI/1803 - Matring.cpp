//============================================================
// Name        : 1803 - Matring.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler & Gaitan
// Description : Programming Problems URI
// Number	   : 1803
//============================================================

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {

    int tam, f, l, m;
    char c;
    string line1;
    string line2;
    string line3;
    string line4;

    while(cin >> line1) {

        cin >> line2;
        cin >> line3;
        cin >> line4;

        tam = line1.size();

        f = (line1[0]-48)*1000;
        f += (line2[0]-48)*100;
        f += (line3[0]-48)*10;
        f += (line4[0]-48);

        l = (line1[tam-1]-48)*1000;
        l += (line2[tam-1]-48)*100;
        l += (line3[tam-1]-48)*10;
        l += (line4[tam-1]-48);

        for(int i = 1; i < tam-1; i++) {

            m = (line1[i]-48)*1000;
            m += (line2[i]-48)*100;
            m += (line3[i]-48)*10;
            m += (line4[i]-48);

            c = (char)((f*m+l)%257);
            cout << c;
        }

        cout << endl;
    }

    return 0;
}
