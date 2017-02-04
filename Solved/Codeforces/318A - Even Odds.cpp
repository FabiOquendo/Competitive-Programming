#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    long  long n, k, ans;
    cin >> n >> k;
    long long mitle = (n/2)+n%2;
    if(k > mitle) {

        k -= mitle;
        ans = k*2;

    } else {

        ans = (k*2)-1;
    }

    cout << ans << endline;

    return 0;
 }

