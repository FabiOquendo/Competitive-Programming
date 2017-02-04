#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

int as[200001];

int next_int() {

    string line; getline(cin, line);
    return atoi(line.c_str());
}

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, a;
    n = next_int();

    for(int i = 0; i < n; i++) {

        cin >> a;
        as[i] = a;
    }

    int i = 0;
    int j = n-1;
    while(i < j) {

        if(i%2 == 0){

            a = as[i];
            as[i] = as[j];
            as[j] = a;
        }
        i++; j--;
    }
    int k = 0;
    for(; k < n-1; k++) {

        cout << as[k] << " ";
    }

    cout << as[k] << endline;

    return 0;
 }

