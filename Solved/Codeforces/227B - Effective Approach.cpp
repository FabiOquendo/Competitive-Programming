#include <bits/stdc++.h>

using namespace std;

const string endli = "\n";

int as[100001][2];

int next_int() {

    string line; getline(cin, line);
    return atoi(line.c_str());
}

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, m, b, a;
    long long x=0, y=0;
    n = next_int();
    for(int i = 0; i < n; i++) {
        cin >> a;
        as[a][0] = i+1;
        as[a][1] = n-i;
    }
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> b;
        x += as[b][0];
        y += as[b][1];
    }

    cout << x << " " << y << endli;
    return 0;
 }
