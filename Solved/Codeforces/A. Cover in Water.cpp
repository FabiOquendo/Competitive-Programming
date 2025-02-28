#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	
	int t;
	cin >> t;

	while (t > 0) {
		int n;
		cin >> n;
		string line;
		cin >> line;

		bool emptyArea = false;
		int emptySpaces = 0;
		int sizeEmptyArea = 0;
		int largerEmptyArea = 0;

		for (int i = 0; i < n; i++) {
			if(line[i] == '#' && !emptyArea)
				continue;
			else if(line[i] == '#' && emptyArea) {
				emptyArea = false;
				sizeEmptyArea = 0;
			} else if(line[i] == '.') {
				emptyArea = true;
				emptySpaces += 1;
				sizeEmptyArea += 1;
				if(sizeEmptyArea > largerEmptyArea)
					largerEmptyArea = sizeEmptyArea;
			}
		}

		cout << (largerEmptyArea > 2 ? "2" : to_string(emptySpaces)) << "\n";
	    
		t--;
	}
	
	return 0;
}