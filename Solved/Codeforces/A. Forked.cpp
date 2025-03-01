#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	
	int t;
	cin >> t;

	while (t > 0) {
		int a, b, xk, yk, xq, yq, x, y;
		cin >> a >> b >> xk >> yk >> xq >> yq;
		
        set<pair<int, int>> s;

		x = xk-a;
        y = yk-b;
        if (x-a == xq && y-b == yq ||
            x-b == xq && y-a == yq ||
            x+a == xq && y-b == yq ||
            x+b == xq && y-a == yq ||
            x-a == xq && y+b == yq ||
            x-b == xq && y+a == yq ||
            x+a == xq && y+b == yq ||
            x+b == xq && y+a == yq ) {
                s.insert({x, y});
        }
        
        x = xk-b;
        y = yk-a;
        if (x-a == xq && y-b == yq ||
            x-b == xq && y-a == yq ||
            x+a == xq && y-b == yq ||
            x+b == xq && y-a == yq ||
            x-a == xq && y+b == yq ||
            x-b == xq && y+a == yq ||
            x+a == xq && y+b == yq ||
            x+b == xq && y+a == yq ) {
                s.insert({x, y});
        }

        x = xk-a;
        y = yk+b;
        if (x-a == xq && y-b == yq ||
            x-b == xq && y-a == yq ||
            x+a == xq && y-b == yq ||
            x+b == xq && y-a == yq ||
            x-a == xq && y+b == yq ||
            x-b == xq && y+a == yq ||
            x+a == xq && y+b == yq ||
            x+b == xq && y+a == yq ) {
                s.insert({x, y});
        }
        x = xk-b;
        y = yk+a;
        if (x-a == xq && y-b == yq ||
            x-b == xq && y-a == yq ||
            x+a == xq && y-b == yq ||
            x+b == xq && y-a == yq ||
            x-a == xq && y+b == yq ||
            x-b == xq && y+a == yq ||
            x+a == xq && y+b == yq ||
            x+b == xq && y+a == yq ) {
                s.insert({x, y});
        }		
        
        x = xk+a;
        y = yk-b;
        if (x-a == xq && y-b == yq ||
            x-b == xq && y-a == yq ||
            x+a == xq && y-b == yq ||
            x+b == xq && y-a == yq ||
            x-a == xq && y+b == yq ||
            x-b == xq && y+a == yq ||
            x+a == xq && y+b == yq ||
            x+b == xq && y+a == yq ) {
                s.insert({x, y});
        }	

        x = xk+b;
        y = yk-a;
        if (x-a == xq && y-b == yq ||
            x-b == xq && y-a == yq ||
            x+a == xq && y-b == yq ||
            x+b == xq && y-a == yq ||
            x-a == xq && y+b == yq ||
            x-b == xq && y+a == yq ||
            x+a == xq && y+b == yq ||
            x+b == xq && y+a == yq ) {
                s.insert({x, y});
        }

        x = xk+a;
        y = yk+b;
        if (x-a == xq && y-b == yq ||
            x-b == xq && y-a == yq ||
            x+a == xq && y-b == yq ||
            x+b == xq && y-a == yq ||
            x-a == xq && y+b == yq ||
            x-b == xq && y+a == yq ||
            x+a == xq && y+b == yq ||
            x+b == xq && y+a == yq ) {
                s.insert({x, y});
        }
        x = xk+b;
        y = yk+a;
        if (x-a == xq && y-b == yq ||
            x-b == xq && y-a == yq ||
            x+a == xq && y-b == yq ||
            x+b == xq && y-a == yq ||
            x-a == xq && y+b == yq ||
            x-b == xq && y+a == yq ||
            x+a == xq && y+b == yq ||
            x+b == xq && y+a == yq ) {
                s.insert({x, y});
        }	
		
		cout << s.size() << "\n";
	    
		t--;
	}
	
	return 0;
}