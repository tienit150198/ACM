#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;
ll a[] = {100,20,10,5,1};

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    ll ans = 0;
    for(ll i = 0 ; i < 5; i++){
        ans += n / a[i];
        if(a[i] <= n)
            n -= n/a[i] * a[i];
    }
    cout << ans;

    return 0;
}
