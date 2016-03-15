//============================================================
// Name        : 1305 - Cut Off Rounder.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number      : 1305
//============================================================

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){

    int n, size1, size2, res, i, j;
    char line1[15];
    char line2[15];
    string lineR;
    bool flag;

    while(gets(line1)) {

        gets(line2);
        size1 = strlen(line1);
        size2 = strlen(line2);
        lineR = "";
        flag = false;
        i = 0;

        for(; i<size1; i++) {

            if(line1[i] == '.') break;

            lineR += line1[i];
        }

        res = atoi(lineR.c_str());

        i++;

        for(j= 2; i<size1 && j<size2; i++, j++) {

            if(line1[i] > line2[j]) {

                res++;
                flag = true;
                break;

            } else if(line1[i] == line2[j]) {

                continue;

            } else {

                flag = true;
                break;
            }
        }

        if (!flag && size1-i > size2-j) {

            for( ; i<size1; i++) {

                if(line1[i] > '0') {

                    res++;
                    break;
                }
            }
        }


        printf("%d\n", res);
    }

    return 0;
}
