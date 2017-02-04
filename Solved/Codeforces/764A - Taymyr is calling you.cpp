#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

int kills[10001];

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, m, z, ans=0;
    cin >> n >> m >> z;

    for(int i = n; i <= z; i+=n) {

        kills[i]++;
    }

    for(int i = m; i <= z; i+=m) {

        kills[i]++;
        if(kills[i] == 2) ans++;
    }

    cout << ans << endline;

    return 0;
 }

