#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int x, y, z, n, m, aux, ans;
    cin >> x >> y >> z;

    if(x == 1 && y == 1 && z == 1)
        ans = 12;
    else {

        if(x % y == 0 || y % x == 0) {

        } else if (x % z == 0 || z % x == 0) {
            aux = y; y = z; z = aux;
        } else {
            aux = x; x = z; x = aux;
        }

        for(int i = 1; i <= min(x, y); i++) {
            if(x % i == 0 && y % i == 0) {
                n = x/i;
                m = y/i;
                if(n*m == z)
                    ans = i*4 + n*4 + m*4;
            }
        }
    }

    cout << ans << endline;

    return 0;
}
