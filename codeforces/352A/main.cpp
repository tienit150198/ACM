#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
ll a[1007];

int main() {
    cin >> n;

    ll x = 0, y = 0;
    for(ll i = 0 ; i < n ; i++) {
        cin >> a[i];
        x += (a[i]==5);
        y += (a[i]==0);
    }

    ll t = x/9;
    ll N = t*9;
    if(N > 0 && y > 0 && N % 9 == 0) {
        bool f = false;
        for(ll i = 1 ; i <= N ; i++) {
            cout << 5;
            f = true;
        }
        if(f) {
            for(ll i = 1 ; i <= y ; i++) {
                cout << 0;
            }
        } else {
            cout << 0;
        }
    } else {
        if(y == 0) {
            cout << -1;
        } else {
            cout << 0;
        }
    }

    return 0;
}
