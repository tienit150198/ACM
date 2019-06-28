#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Max 200007
using namespace std;

ll n,k;
ll a[Max];
map<ll,ll> t;

int main() {
    fast
    cin >> n >> k;

    for(ll i = 0 ; i < n ; i++) {
        cin >> a[i];

        a[i] %= k;
        t[k - a[i]]++;
    }

   /* for(ll i = 0 ; i <= k ; i++) {
        if(t[i])
            cout << i <<  " -> " << t[i] << endl;
    }
*/
    ll ans = 0;
    for(ll i = 0 ; i <= k ; i++) {
        if(i%k == 0 || (i + i) % k == 0) {
            ll x = (t[i]/2)*2;
            ans += x;
            t[i] -= x;
        }
        for(ll j = i + 1 ; j <= k ; j++) {
            if((i + j) % k == 0) {
                ll x = min(t[i],t[j]);
                ans += x*2;
                t[i] -= x;
                t[j] -= x;
            }
        }
    }
    cout << ans;

    return 0;
}
