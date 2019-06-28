#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, m;

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;

    if(m >= n || m == 1) {
        if(m > n)
            cout << -1;
        else
            cout << n;
        return 0;
    }
    ll t = n/2;
    ll t1 = n%2;
    ll ans = t + t1;

    while(ans % m != 0) {
        t--;
        t1 += 2;
        ans = t + t1;
    }

    cout << ans;

    return 0;
}
