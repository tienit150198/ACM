#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n, m;
ll a[200];

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;

    for(ll i = 0 ; i < n; i++)
        cin >> a[i];
    sort(a,a+n);

    ll _sum = 0, ans = 0;
    for(ll i = 0 ; i < m; i++){
        _sum += a[i];

        ans = min(ans,_sum);

    }

    cout << 0 - ans;

    return 0;
}
