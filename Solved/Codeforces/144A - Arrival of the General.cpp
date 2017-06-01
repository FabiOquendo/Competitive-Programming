#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n, aux, maxi=0, mini=100, iMax, iMin;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &aux);
		if(aux > maxi) {
			maxi = aux;
			iMax = i;
		}
		if(aux <= mini) {
			mini = aux;
			iMin = i;
		}	
	}
	int ans = iMax + n - iMin - 1;
	if(iMax > iMin) ans--;
	printf("%d", ans);

	return 0;
}