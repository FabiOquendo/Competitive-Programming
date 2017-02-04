#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string s;
    bool ok = false;
    cin >> s;

    for(int i = 0; i < s.size()-1; i++) {

        if(!ok && s[i] == '0') {
            ok = true;
            continue;
        }
        cout << s[i];
    }
    if(ok)
        cout << s[s.size()-1] << endline;
    else
        cout << endline;


    return 0;
 }

