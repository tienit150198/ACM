#include <bits/stdc++.h>
#define ll long long int
#define Max 2000007

using namespace std;

ll n;
ll a[Max];

int main() {
//    freopen("01.in", "r", stdin);
    ios::sync_with_stdio(false);
    cin >> n;

    ll ans = 0;
    for(ll i = 1 ; i <= n ; i++) {
        cin >> a[i];
    }

    for(ll i = 1 ; i <= n ; i++) {
        ans += min(a[i], a[i-1]);
        a[i] -= min(a[i],a[i-1]);
        a[i-1] -= min(a[i],a[i-1]);

        if(a[i] >= 2) {
            ans += a[i]/2;
            a[i] %= 2;
        }
    }

    cout << ans;

    return 0;
}
