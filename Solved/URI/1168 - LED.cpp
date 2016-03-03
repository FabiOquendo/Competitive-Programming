//============================================================
// Name        : 1168 - LED.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1168
//============================================================

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

map<char, int> leds;

int next_int() {

    string line; getline(cin, line);
    return atoi(line.c_str());
}

void inicializarLeds() {

    leds['0'] = 6;
    leds['1'] = 2;
    leds['2'] = 5;
    leds['3'] = 5;
    leds['4'] = 4;
    leds['5'] = 5;
    leds['6'] = 6;
    leds['7'] = 3;
    leds['8'] = 7;
    leds['9'] = 6;
}

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    inicializarLeds();

    int n, res;
    string line;

    n = next_int();

    while(n--) {

        getline(cin, line);
        res = 0;

        for(int i=0; i<line.size(); i++) {

            res += leds[line[i]];
        }

        cout << res << " leds" << endl;
    }

    return 0;
}
