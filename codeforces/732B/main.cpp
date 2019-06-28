#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll n, k;
ll a[700], f[700];

int main()
{
    fast
    cin >> n >> k;

    ll ans = 0;
    for(ll i = 1 ; i <= n ; i++){
        cin >> a[i];
        f[i] = a[i];
        if(i == 1 || (f[i] + f[i - 1] >= k))
            continue;
        f[i] = k - f[i - 1];
        ans = ans + abs(a[i] - f[i]);
    }

    cout << ans << endl;
    for(ll i = 1 ; i <= n ; i++){
        cout << f[i] << " ";
    }

    return 0;
}
