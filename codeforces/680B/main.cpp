#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, x;
ll a[111];

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> x;

    for(ll i = 1 ; i <= n ; i++){
        cin >> a[i];
    }

    ll ans = a[x];
    ll l = x-1, r = x+1;
    while(true){
        if(l < 1 && r > n)
            break;
        if(l < 1 && r <= n){
            ans += a[r];
            r++;
            continue;
        }
        if(l >= 1 && r > n){
            ans += a[l];
            l--;
            continue;
        }

        ans += (max((a[l] + a[r]) - 1, (ll)0) * 2);
        l--, r++;
    }

    cout << ans;


    return 0;
}
