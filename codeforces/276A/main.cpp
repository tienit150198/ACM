#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, k;

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> k;

    ll ans = INT_MIN;

    for(ll i = 0 ; i < n; i++) {
        ll f, t;
        cin >> f >> t;
        ll tmp = f;

        if(t > k){
            tmp -= (t - k);
        }
        ans = max(ans,tmp);
    }
    cout << ans;

    return 0;
}
