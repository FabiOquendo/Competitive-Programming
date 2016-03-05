//============================================================
// Name        : 1239 - Bloggo Shortcuts.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1239
//============================================================

#include <bits/stdc++.h>

using namespace std;

int main(){

    char line[60];
    bool i, b;

    while(gets(line) != NULL) {

        i = false; b = false;

        for(int j = 0; j < strlen(line); j++) {


            if (line[j] == '_' && !i) {

                printf("<i>");
                i = true;

            } else if (line[j] == '_' && i) {

                printf("</i>");
                i = false;

            } else if (line[j] == '*' && !b) {

                printf("<b>");
                b = true;

            } else if (line[j] == '*' && b) {

                printf("</b>");
                b = false;

            } else {

                printf("%c", line[j]);
            }
        }

        printf("\n");
    }

    return 0;
}
