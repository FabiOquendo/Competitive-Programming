#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, x, y, ans=0;

    for(int i = 0; i < 5; i++) {

        for(int j = 0; j < 5; j++) {

            scanf("%d", &n);
            if(n == 1) {
                x = i; y = j;
            }
        }
    }

    ans = abs(2-x) + abs(2-y);

    printf("%d\n", ans);

    return 0;
 }

