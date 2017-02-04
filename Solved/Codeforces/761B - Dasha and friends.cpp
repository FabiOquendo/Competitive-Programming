#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";

vector<int> compute_Z(string s) {

    int n = s.size();
    vector<int> z(n,0);
    int l, r, k;
    r = l = 0;

    for(int i = 1; i < n; i++) {

        if(i > r) {

            l = r = i;
            while(r < n && s[r-l] == s[r]) r++;
            z[i] = r-l; r--;

        } else {

            k = i - l;
            if(z[k] < r-i+1) z[i] = z[k];
            else {

                l = i;
                while(r < n && s[r-l] == s[r]) r++;
                z[i] = r-l; r--;
            }
        }
    }
    return z;
}

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, l, fi, fj, aux;
    bool ok = false;
    string a="";
    string b="";
    vector<int> z;

    cin >> n >> l;

    cin >> fi;
    aux = fi;
    for(int i = 1; i < n; i++) {

        cin >> fj;
        a += (fj-fi);

        if(i != n)
            fi = fj;
    }

    a += ((l-fj)+aux);

    cin >> fi;
    aux = fi;
    for(int i = 1; i < n; i++) {

        cin >> fj;
        b += (fj-fi);

        if(i != n)
            fi = fj;
    }

    b += ((l-fj)+aux);
    b = b+b;

    z = compute_Z(a+"$"+b);
    for(int i = a.size()+1; i < z.size(); i++)
        if(z[i] == a.size()) {
            ok = true;
            break;
        }

    if(ok)
        cout << "YES" << endline;
    else
        cout << "NO" << endline;

    return 0;
 }
