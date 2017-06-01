#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string s;
    cin >> s;
    int lucky = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == '4' || s[i] == '7')
            lucky++;

    if(lucky == 4 || lucky == 7)
        cout << "YES" << endline;
    else
        cout << "NO" << endline;

    return 0;
}
