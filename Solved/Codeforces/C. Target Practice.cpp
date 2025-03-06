#include <bits/stdc++.h>
 
using namespace std;

int calcPoints (int x, int y) {
	if(x == 0 || x == 9 || y == 0 || y == 9)
		return 1;
	else if((x == 1 || x == 8 && y > 0 && y < 9) ||
			(y == 1 || y == 8 && x > 0 && x < 9))
		return 2;
	else if((x == 2 || x == 7 && y > 1 && y < 8) ||
			(y == 2 || y == 7 && x > 1 && x < 8))
		return 3;
	else if((x == 3 || x == 6 && y > 2 && y < 7) ||
			(y == 3 || y == 6 && x > 2 && x < 7))
		return 4;
	else
		return 5;
}
 
int main() {

    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");
	
	int t;
	inputFile >> t;

	while (t > 0) {
		int ans = 0;
		
		for (int i = 0; i < 10; i++) {
			string line;
			inputFile >> line;
			for (int j = 0; j < 10; j++) {
				if (line[j] == 'X')
					ans += calcPoints (i, j); 
			}
		}

        outputFile << ans << "\n";
        
		t--;
	}
	
	return 0;
}