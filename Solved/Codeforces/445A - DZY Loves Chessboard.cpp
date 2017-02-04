#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

char table[101][101];

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, m;
    char c;
    bool flag = false;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            cin >> c;
            table[i][j] = c;
        }
    }

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            if(table[i][j] == '.') {

                if((i+j) % 2 == 0) {
                    cout << "B";

                } else {
                    cout << "W";
                }
            } else {
                cout << "-";
            }
        }

        cout << endline;
    }

    return 0;
 }

