#include <bits/stdc++.h>
#define ll long long int
#define Max 10000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;

int main() {
    fast
    cin >> n;
    ll ans = 0;
    while(n > 0) {
        ll _max = n%10, t = n;
        while(t > 0) {
            _max = max(_max, t%10);
            t /= 10;
        }

        n -= _max;
        ans++;
    }
    cout << ans;

    return 0;
}
