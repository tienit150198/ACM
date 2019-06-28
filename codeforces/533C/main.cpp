#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
ll const MOD = 1e9 + 7;
using namespace std;

ll n, l, r;

ll _powMod(ll a, ll n){
    if(n == 0)
        return 1;
    if(n == 1)
        return a % MOD;
    ll res = _powMod(a,n/2)%MOD;
    res = res * res % MOD;
    if(n%2)
        res = res * a % MOD;
    return res%MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> l >> r;
    if(l == r){
        if(l * n % 3 == 0)
            cout << 1;
        else
            cout << 0;

        return 0;
    }
    if(l > r){
        cout << 0;
        return 0;
    }

    cout << _powMod(r,l);

    return 0;
}
