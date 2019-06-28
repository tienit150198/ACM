#include <bits/stdc++.h>
#define ll long long int
#define Max 200007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll n, q;
ll a[Max], f[Max];

int main() {
    fast
    cin >> n;

    ll _max = INT_MIN;
    for(ll i = 1 ; i <= n ; i++) {
        cin >> a[i];
        f[a[i]]++;
        _max = max(a[i],_max);
    }

    for(ll i = 1 ; i <= _max ; i++) {
        f[i] += f[i - 1];
    }

    cin >> q;
    while(q--) {
        ll t;
        cin >> t;

        if(t > _max) {
            cout << f[_max] << endl;
        } else
            cout << f[t] << endl;
    }

    return 0;
}
