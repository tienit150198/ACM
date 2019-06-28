#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n, m;
ll a[55];

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(ll i = 0 ; i < m ; i++)
        cin >> a[i];

    sort(a,a+m);
    ll ans = INT_MAX;
    for(ll i = 0 ; i <= m - n ; i++)
    {
        ans = min(abs(a[i] - a[i + n-1]),ans);

    }
    cout << ans;


    return 0;
}
