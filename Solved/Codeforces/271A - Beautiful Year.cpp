#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

bool digits[10];

int next_int() {

    string line; getline(cin, line);
    return atoi(line.c_str());
}

bool year(int n) {

    for(int i = 0; i < 10; i++)
        digits[i] = false;

    bool ans = true;
    int x;

    while(n > 0) {

        x = n%10;
        if(!digits[x])
            digits[x] = true;
        else {
            ans = false;
            break;
        }
        n = n/10;
    }

    return ans;
}

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    n = next_int();
    bool ok = false;

    while(!ok) {
        n++;
        ok = year(n);
    }

    cout << n << endline;

    return 0;
 }

