#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, m, a;
    priority_queue<int> pqD;
    priority_queue<int, vector<int>, greater<int> > pqA;
    priority_queue<int, vector<int>, greater<int> > pq;

    cin >> n >> m;
    while(n--) {
        cin >> a;
        pqD.push(a);
        pqA.push(a);
    }

    while(m--) {
        cin >> a;
        pq.push(a);
    }

    a = max(pqA.top()*2, pqD.top());
    if(a < pq.top())
        cout << a << endline;
    else
        cout << "-1" << endline;

    return 0;
}

