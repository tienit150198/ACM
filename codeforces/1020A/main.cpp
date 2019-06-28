#include <bits/stdc++.h>
#define ll long long int
#define Max 200007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll n, h, a, b, k;

int main() {
    fast
    cin >> n >> h >> a >>  b >> k;

    while(k--) {
        ll ta, tb, fa, fb;
        cin >> ta >> fa >> tb >> fb;

        if(ta == tb) {
            cout << abs(fa - fb) << endl;
        } else {
            ll t = abs(fa-a), t1 =a;
            if(abs(fa - b) < t) {
                t1 = b;
                t = abs(fa - b);
            }

            if(fa >= a && fa <= b) {
                t1 = fa;
                t = 0;
            }

            t += abs(ta - tb);
            t += abs(t1 - fb);

            cout << t << endl;
        }
    }

    return 0;
}
