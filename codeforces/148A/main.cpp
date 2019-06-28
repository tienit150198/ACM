#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Max 100007
using namespace std;

ll n, m, l , k, d;

int main() {
    fast;
    cin >> k >> l >> m >> n >> d;

    if(k == 1 || l == 1 || m == 1 || n == 1){
        cout << d;
        return 0;
    }

    ll ans = 0;
    for(ll i = 1 ; i <= d ; i++){
        if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0)
            ans++;
    }
    cout << ans;


    return 0;
}
