#include <bits/stdc++.h>
#define ll long long int
#define Max 200007

using namespace std;

ll n;
struct m{
    ll s, d;
};
m a[2000];

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    for(ll i = 0 ; i < n; i++){
        cin >> a[i].s >> a[i].d;
    }

    ll ans = a[0].s;
    ll bf = a[0].s;
    for(ll i = 1 ; i < n ; i++){
        ll tmp = a[i].s;
        while(bf >= tmp){
            tmp += a[i].d;
        }
        ans = tmp;
        bf = tmp;
    }
    cout << ans;

    return 0;
}
