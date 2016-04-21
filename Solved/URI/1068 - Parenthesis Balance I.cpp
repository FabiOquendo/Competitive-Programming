//============================================================
// Name        : 1068 - Parenthesis Balance I.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 1068
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main() {

    char line[1001];
    bool ok;

    while(scanf("%s", &line) == 1) {

        ok = true;
        stack<char> s;

        for(int i = 0; i<strlen(line); i++) {

            if (line[i] == '(') {

                s.push(line[i]);

            } else if(line[i] == ')') {

                if(s.empty()) {

                    ok = false;
                    break;

                } else {

                    s.pop();
                }
            }
        }

        if(!s.empty()) ok = false;

        if(ok) {

            printf("correct\n");

        } else {

            printf("incorrect\n");
        }
    }

    return 0;
}
