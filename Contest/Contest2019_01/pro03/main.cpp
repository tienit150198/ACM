#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;
ll n;
ll a[Max], f[Max];
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    f[0] = 0;
    a[0] = 0;
    for(ll i = 1 ; i <= n; i++){
        cin >> a[i];
        f[i] = 0;
    }

    f[1] = a[1];
    ll res = 0;
    for(ll i = 2 ; i <= n ; i++){
        f[i] = max(f[i-2] + a[i], f[i-1]);
        res = max(res,f[i]);
    }
    cout << res;

    return 0;
}
