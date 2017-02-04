#include <bits/stdc++.h>

using namespace std;

const string endli = "\n";

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    long t, sx, sy, ex, ey, ans=0;
    string line;
    bool x, y, xx=false, yy=false, ok=false;
    char c;
    cin >> t >> sx >> sy >> ex >> ey;
    cin >> line;

    if (sx < ex) x = true;
        else if (sx > ex) x = false;
        else xx = true;
    if (sy < ey) y = true;
        else if (sy > ey) y = false;
        else yy = true;

    for(int i = 0; (i < t) && (sx != ex || sy != ey); i++) {

        c = line[i];
        if(!xx && x && c == 'E') sx++;
        if(!xx && !x && c == 'W') sx--;
        if(!yy && y && c == 'N') sy++;
        if(!yy && !y && c == 'S') sy--;
        if(sx == ex) xx = true;
        if(sy == ey) yy = true;
        ans++;
    }

    if(sx == ex && sy == ey) {
        ok = true;
    }

    if(ok)
        cout << ans << endli;
    else
        cout << "-1" << endli;

    return 0;
 }

