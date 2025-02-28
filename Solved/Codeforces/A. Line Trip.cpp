#include <bits/stdc++.h>
 
using namespace std;
 
const string endline = "\n";
 
int main() {
	
	int t, n, x, a, ans;
	cin >> t;
	while (t > 0) {
	    cin >> n >> x;
        vector<int> gasStations;
        
        for (int i = 0; i < n; i++) {
            cin >> a;
            gasStations.push_back(a);
        }

        ans = max(gasStations[0], (x - gasStations[n-1])*2);
        
        for (int i = 0; i < n-1; i++) {
            ans = max(ans, gasStations[i+1] - gasStations[i]);
        }

        cout << ans << endline;
	    
	    t--;
	}
	
	return 0;
}