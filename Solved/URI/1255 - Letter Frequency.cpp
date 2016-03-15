//============================================================
// Name        : 1255 - Letter Frequency.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number      : 1255
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

    int n, maximo;
    string line;
    char c;

    n = next_int();

    while(n--) {

        maximo = 0;
        map<char, int> letters;
        getline(cin, line);

        for(int i=0; i<line.size(); i++) {

            c = line[i];

            if(isalpha(c)) {

                letters[tolower(c)]++;
                maximo = max(letters[tolower(c)], maximo);
            }
        }

        map<char, int>::iterator it;
        it = letters.begin();

        while(it != letters.end()) {

            if ((*it).second == maximo) {

                cout << (*it).first;
            }
            it++;
        }

        cout << endl;
    }

    return 0;
}
