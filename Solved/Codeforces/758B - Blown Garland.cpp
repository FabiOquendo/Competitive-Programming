#include <bits/stdc++.h>

using namespace std;

const string endline = "\n";
const string space = " ";

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int kr=0, kb=0, ky=0, kg=0;
    char c;
    bool ok;
    string line;

    cin >> line;

    for(int i = 0; i < line.size(); i++) {

        c = line[i];
        if(c == '!') {
            ok = false;
            for(int j = i+4; j < line.size(); j+=4){

                c = line[j];
                if(c == 'R') {
                    kr++;
                    ok = true;
                    break;
                } else if(c == 'B') {
                    kb++;
                    ok = true;
                    break;
                } else if(c == 'Y') {
                    ky++;
                    ok = true;
                    break;
                } else if(c == 'G') {
                    kg++;
                    ok = true;
                    break;
                }
            }

            if(!ok)
                for(int j = i-4; j < line.size(); j-=4){

                    c = line[j];
                    if(c == 'R') {
                        kr++;
                        ok = true;
                        break;
                    } else if(c == 'B') {
                        kb++;
                        ok = true;
                        break;
                    } else if(c == 'Y') {
                        ky++;
                        ok = true;
                        break;
                    } else if(c == 'G') {
                        kg++;
                        ok = true;
                        break;
                    }
                }
        }
    }

    cout << kr << space << kb << space << ky << space << kg << endline;

    return 0;
 }

