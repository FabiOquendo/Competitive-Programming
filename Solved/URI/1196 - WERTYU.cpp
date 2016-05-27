//============================================================
// Name        : 1196 - WERTYU.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1196
//============================================================

#include <bits/stdc++.h>

using namespace std;

map<char, char> letters;

void inicializarLetras() {

    letters['1'] = '`';
    letters['2'] = '1';
    letters['3'] = '2';
    letters['4'] = '3';
    letters['5'] = '4';
    letters['6'] = '5';
    letters['7'] = '6';
    letters['8'] = '7';
    letters['9'] = '8';
    letters['0'] = '9';
    letters['-'] = '0';
    letters['='] = '-';

    letters['W'] = 'Q';
    letters['E'] = 'W';
    letters['R'] = 'E';
    letters['T'] = 'R';
    letters['Y'] = 'T';
    letters['U'] = 'Y';
    letters['I'] = 'U';
    letters['O'] = 'I';
    letters['P'] = 'O';
    letters['['] = 'P';
    letters[']'] = '[';
    letters['\\'] = ']';

    letters['S'] = 'A';
    letters['D'] = 'S';
    letters['F'] = 'D';
    letters['G'] = 'F';
    letters['H'] = 'G';
    letters['J'] = 'H';
    letters['K'] = 'J';
    letters['L'] = 'K';
    letters[';'] = 'L';
    letters['\''] = ';';

    letters['X'] = 'Z';
    letters['C'] = 'X';
    letters['V'] = 'C';
    letters['B'] = 'V';
    letters['N'] = 'B';
    letters['M'] = 'N';
    letters[','] = 'M';
    letters['.'] = ',';
    letters['/'] = '.';
}

int main() {

    inicializarLetras();
    char c;

    while(scanf("%c", &c) == 1) {

        if (c == '\n' || c == ' ') {

            printf("%c", c);

        } else {

            printf("%c", letters[c]);
        }
    }

    return 0;
}
