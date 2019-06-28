#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

struct t {
    ll h, m;
};

t x, y, res;

int main() {
    ios::sync_with_stdio(false);
    char t;
    cin >> x.h >> t >> x.m;
    cin >> y.h >> t >> y.m;

    if(x.h == 0 && x.m == 0) {
        x.h = 24;
    }

    res.m = x.m - y.m;
    if(res.m < 0) {
        x.h--;
        res.m = 60 + x.m - y.m;
    }
    res.h = x.h - y.h;
    if(res.h < 0)
        res.h += 24;
    if(res.h == 24)
        res.h = 0;
    if(res.h < 10) {
        cout << "0" << res.h << ":";
        if(res.m < 10)
            cout << "0" << res.m;
        else
            cout << res.m;
    } else {
        cout << res.h << ":";
        if(res.m < 10)
            cout << "0" << res.m;
        else
            cout << res.m;
    }

    return 0;
}
