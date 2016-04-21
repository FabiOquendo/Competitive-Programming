//============================================================
// Name        : 1871 - Zero means Zero.cpp
// Author      : Team UQuick
// Author      : Fabio Stiven Oquendo Soler
// Description : Programming Problems URI
// Number	   : 1871
//============================================================

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {

    long long n, m, suma, mod;
    string res;

    scanf("%lld %lld", &n, &m);

    while(m != 0 && n != 0) {

        suma = n+m;
        res = "";

        while(suma > 0) {

            mod = suma%10;
            suma /= 10;

            if (mod != 0)
                res =  (char)(mod+48) + res;
        }

        cout << res << endl;

        scanf("%lld %lld", &n, &m);
    }

    return 0;
}
