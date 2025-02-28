#include <bits/stdc++.h>
 
using namespace std;
 
const string endline = "\n";
 
int main() {
	
	int t, k, n, a;
	bool ans;
	cin >> t;
	while (t > 0) {
	    cin >> n >> k;
        vector<int> boxes;
        ans = true;
        
        for (int i = 0; i < n; i++) {
            cin >> a;
            boxes.push_back(a);
        }

        if (k == 1) {
            for (int i = 0; i < n-1; i++) {
                if(boxes[i] > boxes[i+1]) ans = false;
            }
        }

        if (ans) {
            cout << "YES" << endline;
        } else {
            cout << "NO" << endline;
        }
	    
	    t--;
	}
	
	return 0;
}