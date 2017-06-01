#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

int press[3][3];
int lights[3][3];

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++) {
            cin >> n;
            press[i][j] = n;
        }

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++) {
            n = press[i][j];
            if(i-1 >= 0) n += press[i-1][j];
            if(i+1 < 3) n += press[i+1][j];
            if(j-1 >= 0) n += press[i][j-1];
            if(j+1 < 3) n += press[i][j+1];

            if(n % 2 == 0)
                lights[i][j] = 1;
            else
                lights[i][j] = 0;
        }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            cout << lights[i][j];
        cout << endline;
    }

    return 0;
}

