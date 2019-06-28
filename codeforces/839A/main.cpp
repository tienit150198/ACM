#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, k;

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> k;

    ll ans = 0, day = 0;;
    for(ll i = 0 ; i < n; i++) {
        ll tmp;
        cin >> tmp;

        ans += tmp;
        ll _candies = min(ans,(ll)8);

        ans -= _candies;
        k -= _candies;

        if(k <= 0 && !day) {
            day = i + 1;
        }
    }

    if(k <= 0)
        cout << day;
    else
        cout << -1;

    return 0;
}
