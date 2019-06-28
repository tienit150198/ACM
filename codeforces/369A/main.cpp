#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n,m,k;

int main()
{
    ios::sync_with_stdio(false);

    cin >> n >> m >> k;
    ll a;
    for(ll i = 0 ; i < n ; i++){
        cin >> a;

        if(a == 1)
            m--;
        else if(a == 2){
            if(k)
                k--;
            else
                m--;
        }
    }

    if(m >= 0 && k >= 0)
        cout << 0;
    else{
        ll ans = 0;
        if(m < 0)
            ans -= m;
        if(k < 0)
            ans -= k;

        cout << ans;
    }

    return 0;
}
