#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string s;
    int low=0, up=0;

    cin >> s;
    for(int i = 0; i < s.size(); i++)
        if(islower(s[i]))
            low++;
        else
            up++;

    if(up > low)
        for(int i = 0; i < s.size(); i++)
            cout << (char) toupper(s[i]);
    else
        for(int i = 0; i < s.size(); i++)
            cout << (char) tolower(s[i]);

     cout << endline;

    return 0;
}

