#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, m, aux, maxi=0, mini=0;
    string line, ans;
    priority_queue<int> pqMax;
    priority_queue<int, vector<int>, greater<int> > pqMin;

    cin >> n >> m;

    for(int i = 0; i < m; i++) {

        cin >> aux;
        pqMax.push(aux);
        pqMin.push(aux);
    }

    while(n--) {

        aux = pqMax.top();
        pqMax.pop();
        maxi += aux;
        if(aux-1 > 0)
            pqMax.push(aux-1);

        aux = pqMin.top();
        pqMin.pop();
        mini += aux;
        if(aux-1 > 0)
            pqMin.push(aux-1);
    }

    cout << maxi << " " << mini << endline;

    return 0;
 }
