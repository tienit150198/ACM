#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n, m;
ll a[Max], f[Max];

int main() {
    fast
    cin >> n >> m;

    for(ll i = 1 ; i <= n ; i++){
        cin >> a[i];
    }

    set<ll> t;
    for(ll i = n; i >= 1 ; i--){
        t.insert(a[i]);
        f[i] = t.size();
    }

    while(m--){
        ll x;
        cin >> x;

        cout << f[x] << endl;
    }

    return 0;
}
