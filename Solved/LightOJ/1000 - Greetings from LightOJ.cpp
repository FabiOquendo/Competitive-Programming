//============================================================
// Name        : 1000 - Greetings from LightOJ.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems LightOJ
// Number	   : 1000
//============================================================

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {

    int a, b, cases, c=1;
    scanf("%d",&cases);

    while(cases--) {

        scanf("%d %d", &a, &b);

        printf("Case %d: %d\n", c++, a+b);
    }

	return 0;
}
