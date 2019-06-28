#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n,x;
bool a[2000];

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> x;

    for(ll i = 0 ; i < n ; i++) {
        ll tmp;
        cin >> tmp;
        a[tmp] = true;
    }

    ll ans = 0;
    if(x == 0 && a[0]) {
        cout << 1;
        return 0;
    }
    for(ll i = 0 ; i < x ; i++) {
        if(!a[i])
            ans++;
    }
    if(a[x])
        ans++;

    cout << ans;

    return 0;
}
