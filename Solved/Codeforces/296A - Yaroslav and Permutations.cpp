#include <bits/stdc++.h>

using namespace std;

const string endli = "\n";

int as[100001];

int next_int() {

    string line; getline(cin, line);
    return atoi(line.c_str());
}

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, a;
    bool ok = true;
    n = next_int();
    map<int, int> mapa;

    for(int i = 0; i < n; i++) {
        cin >> a;
        mapa[a]++;
    }

    map<int, int>::iterator it;
    it = mapa.begin();

    while(it != mapa.end()) {

        if((*it).second > (n/2)+n%2) {
            ok = false;
            break;
        }

        it++;
    }

    if(ok)
        cout << "YES" << endli;
    else
        cout << "NO" << endli;

    return 0;
 }
