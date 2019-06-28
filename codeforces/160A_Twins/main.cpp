#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n;
ll a[101];
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    ll sum = 0;
    for(ll i = 0 ; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a,a+n, greater<ll>() );
    ll ans = 0, coin = 0;
    for(ll i = 0 ; i < n; i++)
    {
        coin += a[i];
        ans++;
        if(coin > sum/2)
            break;
    }
    cout << ans;


    return 0;
}
