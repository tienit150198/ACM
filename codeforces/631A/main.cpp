#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    ll x = 0, y = 0;
    for(ll i = 0 ; i < n ; i++){
        ll a;
        cin >> a;
        x |= a;
    }

    for(ll i = 0 ; i < n ; i++){
        ll a;
        cin >> a;
        y |= a;
    }

    cout << x + y;


    return 0;
}
