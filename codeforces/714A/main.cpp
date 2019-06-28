#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll l1, l2, r1, r2, k;

int main() {
    fast
    cin >> l1 >> r1 >> l2 >> r2 >> k;

    ll t1 = max(l1,l2);
    ll t2 = min(r1,r2);

    ll ans = t2 - t1+1;

    if(k >= t1 && k <= t2)
        ans--;
    if(t2 < t1)
        ans = 0;

    cout << ans;

    return 0;
}
