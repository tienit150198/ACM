#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n, k;
ll a[Max], t[Max], f[Max];

int main() {
    fast
    cin >> n >> k;

    ll _sum = 0;
    for(ll i = 1 ; i <= n ; i++){
        cin >> a[i];
    }
    for(ll i = 1 ; i <= n ; i++){
        cin >> t[i];
        if(t[i]){
            _sum += a[i];
            f[i] = f[i - 1];
        }
        else
            f[i] = f[i - 1] + a[i];
    }

    ll _max = _sum;
    for(ll i = k ; i <= n ; i++){
        _sum = max(_sum, _max+f[i] - f[i-k]);
    }

    cout << _sum;


    return 0;
}
