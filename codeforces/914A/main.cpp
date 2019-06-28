#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;
ll a[Max];

bool isSquare(ll n) {
    ll x = sqrt(n);
    return x * x == n;
}

int main() {
    cin >> n;
    for(ll i = 1 ; i <= n ; i++) {
        cin >> a[i];
    }

    ll _max = INT_MIN;
    for(ll i = 1 ; i <= n ; i++) {
        if(!isSquare(a[i])) {
            _max = max(_max, a[i]);
        }
    }

    cout << _max;

    return 0;
}
