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

    int n, a, b, aux;
    n = next_int();
    map<int, pair<int, int> > mapa;
    priority_queue<int, vector<int>, greater<int> > pq;
    cin >> a;
    aux = a;
    for(int i = 1; i < n; i++) {
        cin >> b;
        mapa[abs(b-a)] = pair<int, int>(i, i+1);
        pq.push(abs(b-a));
        a = b;
    }

    mapa[abs(b-aux)] = pair<int, int>(n, 1);
    pq.push(abs(b-aux));

    cout << mapa[pq.top()].first << " " << mapa[pq.top()].second << endli;

    return 0;
 }

