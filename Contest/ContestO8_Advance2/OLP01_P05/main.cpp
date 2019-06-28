#include <bits/stdc++.h>
#define ll long long int
#define Max 100011
using namespace std;
ll n;
ll a[Max], f[Max];
int main()
{
    ios::sync_with_stdio(false);
    ll res = 0;
    cin >> n;
    ll _min = 99999, _max = -11111;
    for(ll i = 1 ; i <= n; i++){
        cin >> a[i];

        f[i] = f[i - 1] + a[i];
    }

    for(ll i = 1; i <= n; i++){
        _min = min(_min,f[i]);
        _max = f[i] - f[_min];

    }

    cout << _max;

    return 0;
}
