#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    ll _sum = 0;
    ll a = 0;
    for(ll i = 0 ; i < n ; i++){
        cin >> a;
        _sum += a;
    }
    n++;
    ll ans = 0;
    for(ll i = 0 ; i < 5 ; i++){
        if((_sum+i+1) % n != 1)
            ans++;
    }
    cout << ans;


    return 0;
}
