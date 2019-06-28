#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
ll a[111];

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    for(ll i = 1 ; i <= n; i++)
        cin >> a[i];

    ll ans = INT_MAX;

    for(ll i = 2 ; i < n; i++){
        ll _max = INT_MIN;
        for(ll j = 1 ; j < n ; j++){
            if(i == j){
                _max = max(a[j + 1] - a[j - 1], _max);
                continue;
            }
            _max = max(a[j + 1] - a[j], _max);
        }
        ans = min(_max, ans);
    }

    cout << ans;





    return 0;
}
