#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, b, a, aux;
    cin >> n >> a >> b;

    aux = max(a+1, n-b);
    aux -= n;
    aux = aux*-1;

    cout << aux+1 << endline;

    return 0;
 }

