#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");
	
	int t;
	inputFile >> t;

	while (t > 0) {
		int n, k;
		inputFile >> n >> k;

        string line;
        inputFile >> line;

        map<char, int> counter;
        
        for (int i = 0; i < n; i++) {
            counter[line[i]]++;
	    }

        bool ans = n - k == 1 ? true : false;

        if (!ans) {
            int oddCharacters = 0;
            for (auto& p : counter)
                if (p.second % 2 == 1) 
                    oddCharacters++;

            if ((n-k)  % 2 == 0 && oddCharacters <= k)
                ans = true;
            else if ((n-k)  % 2 == 1 && oddCharacters <= k+1)
                ans = true;
        }
        
        outputFile << (ans ? "YES" : "NO") << "\n";
        
		t--;
	}
	
	return 0;
}