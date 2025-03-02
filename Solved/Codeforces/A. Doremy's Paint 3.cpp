#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    // ifstream inputFile("input.txt");
    // ofstream outputFile("output.txt");
	
	int t;
	cin >> t;

	while (t > 0) {
		int n;
		cin >> n;

        set<int> s;
        map<int, int> counter;

        int b;
        for (int i = 0; i < n; i++) {
            cin >> b;
            s.insert(b);
            counter[b]++;
	    }

        bool ans = false;

        if (s.size() == 1) 
            ans = true;
        else if (s.size() == 2) {
            for(auto it = s.begin(); it != s.end(); it++)
                if (counter[*it] == n/2)
                    ans = true;
        }

        cout << (ans ? "Yes" : "No") << "\n";
        
		t--;
	}
	
	return 0;
}