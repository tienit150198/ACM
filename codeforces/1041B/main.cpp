#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll a, b, x, y;

ll _gcd(ll a, ll b){
    return (b == 0 ? a : _gcd(b,a%b));
}

int main() {
    fast
    cin >> a >> b >> x >> y;

    ll uc = _gcd(x,y);

    if(uc != 1)
        x/=uc, y/=uc;

    ll A = a / x;
    ll B = b / y;

    cout << min(A,B);

    return 0;
}
