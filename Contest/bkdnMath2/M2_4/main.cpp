#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll t,n;
ll a[7] = {1,1,2,6,8,2,0};

int main() {
    fast
    cin >> t;

    while(t--){
        cin >> n;
        ll ans = 0;
        ll i = 5;
        while(n/i >= 1){
            ans += n/i;
            i *= 5;
        }
        cout << ans << endl;
    }

    return 0;
}
