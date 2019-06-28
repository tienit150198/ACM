#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, L, a;

struct m{
    ll t, l;
};

m x[Max];

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> L >> a;

    ll ans = 0;
    for(ll i = 0 ; i < n; i++){
        cin >> x[i].t >> x[i].l;
    }
    ll tmp = 0;
    for(ll i = 0 ; i < n; i++){
        ans += (x[i].t - tmp) / a;
        tmp = x[i].t + x[i].l;
    }

    ans += (L - tmp) / a;
    cout << ans;

    return 0;
}
