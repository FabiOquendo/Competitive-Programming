#include <bits/stdc++.h>

using namespace std;

const string endli = "\n";

int next_int() {

    string line; getline(cin, line);
    return atoi(line.c_str());
}

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, b, a;;
    string line, h;
    bool ok = false;
    n = next_int();

    while(n--) {

        getline(cin, line);
        stringstream ss(line);
        ss >> h >> b >> a;

        if(b >= 2400)
            if(a > b) ok = true;
    }

    if(ok)
        cout << "YES" << endli;
    else
        cout << "NO" << endli;

    return 0;
 }
