#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

int next_int() {

    string line; getline(cin, line);
    return atoi(line.c_str());
}

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, x1=0, y1=0, z1=0, x, y, z;
    string line;
    bool ok = false;
    n = next_int();

    while(n--) {

        getline(cin, line);
        stringstream ss(line);
        ss >> x >> y >> z;

        x1 += x; y1 += y; z1 += z;
    }

    if(x1 == 0 && y1 == 0 && z1 == 0)
        cout << "YES" << endline;
    else
        cout << "NO" << endline;

    return 0;
 }

