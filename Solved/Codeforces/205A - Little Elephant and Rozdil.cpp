//Con el pratrocinio de Pale, por que tiene monchi y yo voy a por chicharron...

#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

int next_int() {

    string line; getline(cin, line);
    return atoi(line.c_str());
}

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, a;
    bool ok=true;
    n = next_int();
    int aux = n;
    map<int, int> mapa;
    map<int, int> as;
    priority_queue<int, vector<int>, greater<int> > pq;

    for(int i = 0; i < n; i++) {

        cin >> a;
        mapa[a]++;
        as[a] = i;
        pq.push(a);
    }

    if(mapa[pq.top()] > 1) ok = false;

    if(ok)
        cout << as[pq.top()]+1 << endline;
    else
        cout << "Still Rozdil" << endline;

    return 0;
 }


