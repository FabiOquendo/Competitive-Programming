#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	
	int t;
	cin >> t;

	while (t > 0) {
		int n;
		cin >> n;
		
		cout << (n % 3 == 0 ? "Second" : "First") << "\n";
	    
		t--;
	}
	
	return 0;
}