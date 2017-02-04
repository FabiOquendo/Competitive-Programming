#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

int next_int() {

    string line; getline(cin, line);
    return atoi(line.c_str());
}

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, a, b, ans=0;
    priority_queue<int> pq;
    n = next_int();

    while(n--) {

        cin >> a;
        pq.push(a);
    }

    a = pq.top();
    pq.pop();

    while(!pq.empty()) {

        b = pq.top();
        pq.pop();
        ans += (a-b);
    }

    cout << ans << endline;

    return 0;
 }
