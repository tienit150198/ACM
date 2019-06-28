#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
ll a[Max];

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    ll ans = 0;
    for(ll i = 0 ; i < n; i++) {
        cin >> a[i];

    }

    sort(a,a+n);
    ans = min(a[n-1]-a[1], a[n-2]-a[0]);

    if(n == 2)
        cout << 0;
    else
        cout << ans;

    return 0;
}
