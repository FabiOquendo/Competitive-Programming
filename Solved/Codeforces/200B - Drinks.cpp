#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

int next_int() {

    string line; getline(cin, line);
    return atoi(line.c_str());
}

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    double p, ans = 0.0;
    n = next_int();

    for(int i = 0; i < n; i++) {

        cin >> p;
        ans += (p/100)/n;
    }

    cout << ans*100 << endline;

    return 0;
 }
