//============================================================
// Name        : 1278 - Justifier II.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1278
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

    int n, maxSize, aux;
    string line, auxStr;
    vector<string> lines;
    bool flag;

    n = next_int();

    while(n != 0) {

        maxSize = 0;

        while(n--) {

            getline(cin, line);
            flag = false;
            auxStr = "";
            for(int i = 0; i<line.size(); i++) {

                if(line[i] == ' ' && !flag) continue;

                if(line[i] != ' ' && !flag) {

                    auxStr += line[i];
                    flag = true;

                } else if(line[i] != ' ' && flag) {

                    auxStr += line[i];

                } else if(line[i] == ' ' && flag && line[i+1] >= 'A' && line[i+1] <= 'Z') {

                    auxStr += line[i];
                    flag = false;
                }
            }

            maxSize = max((int)auxStr.size(), maxSize);
            lines.push_back(auxStr);
        }

        for(int i=0; i<lines.size(); i++) {

            line = lines[i];

            if (line.size() != maxSize) {

                aux = maxSize - line.size();

                while(aux--) cout << " ";
            }

            cout << line << endl;
        }

        lines.clear();

        n = next_int();

        if (n) cout << endl;
    }

    return 0;
}
