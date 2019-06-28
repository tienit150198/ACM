#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;
ll f[Max];
map<ll,ll> t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    ll ans = 0;
    ll _max = 0;
    for(ll i = 1 ; i <= n;  i++) {
        ll tmp;
        cin >> tmp;
        _max = max(_max, tmp);
        t[tmp]++;
    }

    f[0] = 0;
    f[1] = 1*t[1];
    for(ll i = 1 ; i <= _max ; i++) {
        f[i] = max(f[i - 1], f[i - 2] + t[i]*i);
    }

    cout << f[_max];

    return 0;
}
