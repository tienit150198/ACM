#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll n;
ll a[10], b[10], c[10];

int main() {
    fast
    cin >> n;

    ll tmp;
    for(ll i = 0 ; i < n ; i++) {
        cin >> tmp;
        a[tmp]++;
        c[tmp]++;
    }
    for(ll i = 0 ; i < n ; i++) {
        cin >> tmp;
        b[tmp]++;
        c[tmp]++;
    }

    for(ll i = 1 ; i <= 5 ; i++){
        if(c[i]%2 == 1){
            cout << -1;
            return 0;
        }
    }

    ll ans = 0;
    for(ll i = 1 ; i <= 5 ; i++){
        ans += (abs(a[i] - b[i])/2);
    }


    cout << ans/2;

    return 0;
}
