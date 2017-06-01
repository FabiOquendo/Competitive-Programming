#include <bits/stdc++.h>

using namespace std;

vector<int> primes;
bool p[50];

void criba(){
	memset(p, true, sizeof p);
	for(int i = 2; i < 50; i++){
		if(p[i]) {          
			primes.push_back(i);
			for(int j = i+i; j < 50; j+=i){
				p[j] = false;
			}
		}

	}
}

int main() {
	criba();
	int n, m;
	bool ok = false;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < primes.size(); i++){
		if(primes[i] == n){
			if(i+1 < primes.size())
				if(primes[i+1] == m) ok = true;
		}
	}
	if(ok)
		printf("YES\n");
	else
		printf("NO\n");

}
