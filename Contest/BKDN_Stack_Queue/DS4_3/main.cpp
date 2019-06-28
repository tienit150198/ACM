#include <bits/stdc++.h>
#define ll long long int
#define Max 10000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll t,n;

int main() {
    fast
    //freopen("input.in", "r", stdin);
    cin >> t;
    while(t--) {
        cin >> n;
        // tim uoc

        ll ans = 0;
        while(n > 0) {
            ll tmp = n-1;
            for(ll i = 2 ; i * i <= n ; i++) {
                if(n%i == 0) {
                    tmp = min(max(n/i,i), tmp);
                }
            }
            cout << tmp << " ";
            n = tmp;
            ans++;
        }
        cout << ans << endl;

    }

    return 0;
}
