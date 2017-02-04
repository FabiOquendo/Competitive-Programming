#include <bits/stdc++.h>

using namespace std;

const string endli = "\n";

int hora[24][60];

int next_int() {

    string line; getline(cin, line);
    return atoi(line.c_str());
}

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, h, m, maxi=0;
    n = next_int();
    map<int, int> mapa;

    for(int i = 0; i < n; i++) {
        cin >> h >> m;
        hora[h][m]++;
        maxi = max(maxi, hora[h][m]);
    }

    cout << maxi << endli;


    return 0;
 }
