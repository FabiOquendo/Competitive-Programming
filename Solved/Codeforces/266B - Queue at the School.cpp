#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, t;
    string line, ans;

    cin >> n >> t;
    cin >> line;

    for(int i = 0; i < t; i++) {

        for(int j = 0; j < n-1; j++) {

            if(line[j] == 'B' && line[j+1] == 'G') {
                line[j] = 'G';
                line[j+1] = 'B';
                j++;
            }
        }
    }

    cout << line << endline;

    return 0;
 }

