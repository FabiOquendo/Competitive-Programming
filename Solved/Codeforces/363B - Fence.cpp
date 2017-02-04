#include <bits/stdc++.h>

using namespace std;

int fence[150001];
int dp[150001];

int solve(int n, int k) {

    dp[0] = 0;
    for(int i = 0; i < k; i++)
        dp[0] += fence[i];

    double sum = dp[0];
    int ans = 1;
    int j = 0, h=k;
    for(int i = 1; i <= n-k; i++) {

        dp[i] = dp[i-1]-fence[j++]+fence[h++];
        if (dp[i] < sum) {

            sum = dp[i];
            ans = i+1;
        }
    }

    return ans;
}

int main() {

    int n, k, ans;

    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++)
        scanf("%d", fence+i);

    ans = solve(n, k);
    printf("%d\n", ans);

    return 0;
}
