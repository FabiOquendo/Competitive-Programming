#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");
	
	int t;
	inputFile >> t;

	while (t > 0) {
		int n, a, total = 0;
		inputFile >> n;

        for (int i = 0; i < n-1; i++) {
			inputFile >> a;
			total += a;
		}

        outputFile << (-1 * total) << "\n";
        
		t--;
	}
	
	return 0;
}