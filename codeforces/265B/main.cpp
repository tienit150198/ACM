#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    ll a;
    ll ans = 0;
    cin >> a;

    ans += a + 2;
    ll b = a;
    for(ll i = 0 ; i < n - 1 ; i++) {
        cin >> a;

        ans += abs(b - a) + 2;
        b = a;
    }
    cout << ans - 1;
    return 0;
}
