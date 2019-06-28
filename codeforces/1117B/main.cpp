#include <bits/stdc++.h>
#define ll long long int
#define Max 200007

using namespace std;

ll n, m, k;
ll a[Max];

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m >> k;
    for(ll i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    sort(a,a+n,greater<ll>());

    ll tmp = m / (k+1);

    ll ans = tmp * a[1] + (m - tmp)*a[0];
    cout << ans;


    return 0;
}
