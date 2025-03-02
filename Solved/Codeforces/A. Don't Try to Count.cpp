#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    // ifstream inputFile("input.txt");
    // ofstream outputFile("output.txt");
	
	int t;
	cin >> t;

	while (t > 0) {
		int n, m;
		cin >> n >> m;

        string x, s;
		cin >> x >> s;

        auto it = std::search(x.begin(), x.end(), s.begin(), s.end());

        int ans = 0;
        while (it == x.end())
        {
            ans++;
            x = x + x;
            it = std::search(x.begin(), x.end(), s.begin(), s.end());
            if (x.length() > (s.length() * 2))
                break;
        }

        if (x.length() > (s.length() * 2) && it == x.end())
            ans = -1;
        
        cout << ans << "\n";
        
		t--;
	}
	
	return 0;
}