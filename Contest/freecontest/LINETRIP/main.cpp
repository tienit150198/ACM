#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;
set<ll> a;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    ll maxA = 0,maxD = 0;
    for(ll i = 0 ; i < n ; i++) {
        ll tmp;
        cin >> tmp;

        if(tmp < 0) {

            maxA = min(tmp, maxA);
        } else {

            maxD = max(tmp, maxD);
        }

    }

    ll ans = abs(maxA) + abs(maxA - maxD) + maxD;
    ll ans1 = maxD + abs(maxD - maxA) + abs(maxA);
//    cout << ans << " " << ans1 << endl;
    cout << min(ans,ans1);


    return 0;
}
