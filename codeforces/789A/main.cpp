#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define limit 10007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll n, k;
ll a[Max];

int main() {
    fast
    cin >> n >> k;
    ll ans = 0, t = 0;
    for(ll i = 0 ; i < n ; i++) {
        cin >> a[i];

        while(a[i] > k){
            a[i] -= min(k*2,a[i]);
            ans++;
        };
        if(a[i] <= k && a[i])
            t++;
    }
    ans += ((t+1)/2);
    cout << ans;

    return 0;
}
