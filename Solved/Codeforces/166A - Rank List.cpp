#include <bits/stdc++.h>

using namespace std;

const string endli = "\n";

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, k, p, t, points, team;
    string line;
    map<int, int> m;
    priority_queue<int> pq;

    getline(cin, line);
    stringstream ss(line);
    ss >> n >> k;

    while(n--) {

        getline(cin, line);
        stringstream ss(line);
        ss >> p >> t;

        points = (p*100)-t;
        m[points]++;
        pq.push(points);
    }

    while(k--) {

        team = pq.top();
        pq.pop();
    }

    cout << m[team] << endli;

    return 0;
 }

