#include <bits/stdc++.h>
#define ll long long int
#define Max 300007
using namespace std;

ll n;
ll a[Max];

void init() {
    for(ll i = 0; i < Max; i++) {
        a[i] = 0;
    }
}

int main() {
    cin >> n;

    for(ll i = 0 ; i < n; i++) {
        cin >> a[i];
    }

    ll _max  =0;
    vector<ll> b(n+1,INT_MAX);
    b[0] = INT_MIN;
    for(ll i = 0 ; i < n; i++) {
        ll k = lower_bound(b.begin(),b.end(),a[i]) - b.begin();
        b[k] = a[i];
        _max = max (_max,k);
    }

    cout << _max;

    return 0;
}
