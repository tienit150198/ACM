#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007

using namespace std;

ll n, b, d;
ll a[Max];

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> b >> d;

    ll ans = 0, _size = 0;;
    for(ll i = 0 ; i < n; i++) {
        cin >> a[i];

        if(a[i] > b)
            continue;
        _size += a[i];
        if(_size> d) {
            ans++;
            _size = 0;
        }

    }

    cout << ans;


    return 0;
}
