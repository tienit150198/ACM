#include <bits/stdc++.h>
#define ll long long int
#define Max 200007

using namespace std;

ll n, m;
ll a[200];

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;

    for(ll i = 0 ; i < n ; i++)
        cin >> a[i];
    sort(a,a+n,greater<ll>());

    ll sum = 0, ans = n;

    for(ll i = 0 ; i < n ; i++){
        sum += a[i];
        if(sum >= m){
            ans = i+1;
            break;
        }
    }
    if(ans == n && sum < m){
        cout << -1;
        return 0;
    }

    ll tmp = 0;
    for(ll i = 2 ; i <= n; i++){
        tmp = 0;
        sum = 0;

        ll j = 0, t = 0;
        while(sum < m && j < n){
            ll c = 0;
            for(; t < j + i ; t++){
                sum = sum + max(a[t] - c,0*1LL);
                c++;
            }
            j++;
        }
        if(sum >= m)
            ans = min(ans,j);
    }

    cout << ans;

    return 0;
}
