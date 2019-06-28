#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;
ll n;
ll a[107];
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    for(ll i = 0 ; i < n; i++)
        cin >> a[i];

    ll ans = INT_MAX;
    for(ll i = 0 ; i < n; i++){
        ll x = i;
        ll tmp = 0;
        for(ll j = 0 ; j < n ;j++){
            tmp += a[j] * 2 * (abs(i - j) + i + j);
        }
        ans = min(ans,tmp);
    }


    cout << ans;

    return 0;
}
