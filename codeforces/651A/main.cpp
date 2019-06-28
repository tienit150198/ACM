#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll a, b;
ll f[307];
int main()
{
    fast
    cin >> a >> b;
   /* f[0] = 0;
    f[1] = 1;
    f[2] = 1;
    for(ll i = 3 ; i <= 300 ; i++){
        f[i] = (i - 1)/2;
    }
    if(a <= 1 && b <= 1){
        cout << 0;
        return 0;
    }

    ll ans = 0;
    while(a > 0 && b > 0){
        if(a < b)
            swap(a,b);
        ll x = f[a];
        a -= (f[a]*2);
        b += x;
        ans += x;
    }*/

    ll ans = max(a + b - 2 - !((a - b) % 3),0LL);

    cout << ans;

    return 0;
}
