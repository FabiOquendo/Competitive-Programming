#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");
	
	int t;
	inputFile >> t;

	while (t > 0) {
		long long n, k, x;
		inputFile >> n >> k >> x;

        long long min = k * (k+1) / 2;
        long long max = k * n - k * (k-1) / 2;

        outputFile << (x >= min && x <= max ? "YES" : "NO") << "\n";
        
		t--;
	}
	
	return 0;
}