#include <bits/stdc++.h>
 
using namespace std;
 
const string endline = "\n";
 
int main() {
	
	int t, a1, a2, a4, a5, x, y, ans;
	
	cin >> t;
	
	while (t > 0) {
	    cin >> a1 >> a2 >> a4 >> a5;
	    
	    x = a1 + a2;
	    y = a5 - a4;
	    
	    if (x == y && x + a2 == a4) {
	        ans = 3;
	    } else if (x == y || x + a2 == a4 || y + a2 == a4) {
	        ans = 2;
	    } else {
    	    ans = 1;
    	}
	    
	    cout << ans << endline;
	    
	    t--;
	}
	
	return 0;
}