#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll n;
ll a[Max];

ll _gcd(ll a, ll b){
    return (b == 0 ? a : _gcd(b,a%b));
}

int main() {
    fast
    cin >> n;

    for(ll i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    sort(a,a+n);

    ll sum = _gcd(a[0],a[1]);
    for(ll i = 1 ; i < n ; i++){
        sum = _gcd(sum,a[i]);
    }

    cout << sum*n;

    return 0;
}
