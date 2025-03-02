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

        set<int> s;

        while (n > 0) {
            int a;
            inputFile >> a;
            s.insert(a);
            n--;
        }

        outputFile << (s.find(k) != s.end() ? "YES" : "NO") << "\n";
        
		t--;
	}
	
	return 0;
}