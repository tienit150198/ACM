#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    if(n == 1){
        cout << 1;
        return 0;
    }

    ll ans = 2;
    for(ll i = 2 ; i * i <= n ; i++) {
        if( !(n%i) ) {
            ans++;
            if(i != n/i)
                ans++;
        }
    }

    cout << ans;

    return 0;
}
