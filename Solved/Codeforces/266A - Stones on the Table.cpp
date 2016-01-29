//============================================================
// Name        : 266A - Stones on the Table.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems CODEFORCES
// Number	   : 266A
//============================================================

#include <stdio.h>

using namespace std;

int main() {

    int n, res;
    char color;

    while (scanf("%d", &n) == 1) {

		res = 0;

		char line[n];

		scanf("%s", line);

		color = line[0];

		for (int i=1; i < n; i++) {

            if (color == line[i]) {

                res++;

            } else {

                color = line[i];
            }
		}

		printf("%d\n", res);
    }

    return 0;
}
