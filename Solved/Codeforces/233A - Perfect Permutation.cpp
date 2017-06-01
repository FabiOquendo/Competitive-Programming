#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

int next_int() {

    string line; getline(cin, line);
    return atoi(line.c_str());
}

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    n = next_int();

    if(n % 2 == 0)
        for(int i = 1; i < n; i+=2)
            cout << i+1 << " " << i << " ";
    else
        cout << "-1" << endline;

    return 0;
}

