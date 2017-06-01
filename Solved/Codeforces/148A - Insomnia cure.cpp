#include <bits/stdc++.h>

using namespace std;

set<int> escaped;

int main(){

	int k, l, m, n, d;
	scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);
	int a[4] = {k, l, m, n};
	for(int i = 0; i < 4; i++){
		for(int j = a[i]; j <= d; j+=a[i]){
			escaped.insert(j);
		}
	}

	printf("%d", escaped.size());

	return 0;
}