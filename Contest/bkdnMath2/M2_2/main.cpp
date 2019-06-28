#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll t, n;

int main() {
    fast
    cin >> t;
    while(t--) {
        cin >> n;

        ll a[Max], _max = INT_MIN;
        for(ll i = 0 ; i <= Max ; i++)
            a[i] = 0;

        for(ll i = 0 ; i < n ; i++) {
            ll tmp;
            cin >> tmp;
            _max = max(_max,tmp);
            a[tmp]++;
        }
        ll ans = 0;
        for(ll i = 1 ; i <= _max ; i++) {
            if(a[i]) {
                ll x = i;
                ll c = (a[i] - 1) * (a[i]) / 2;

                for(ll j = x*2 ; j <= _max ; j += i) {
                    if(a[j]) {
                        ll tmp = a[j];
                        c = c + a[i]*a[j];
                    }
                }
                ans += c;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
