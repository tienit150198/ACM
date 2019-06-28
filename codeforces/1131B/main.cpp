#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;
struct m {
    ll a, b;
};
m a[Max];

int main() {
    fast

    cin >> n;

    ll a = 0, b = 0;
    ll ans = 0;
    while(n--) {
        ll x, y;
        cin >> x >> y;

        ll t = min(x,y);
        ll t1 = max(a,b);

        ans += max(0LL, t - t1+1);
        a = x;
        b = y;

        if(a == b)
            a++,b++;

    }
    cout << ans;


    return 0;
}
