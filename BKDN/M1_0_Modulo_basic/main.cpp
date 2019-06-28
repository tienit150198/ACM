#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll gcdExtended(ll a, ll b, ll &x, ll &y){
    if(b == 0){
        x = 1;
        y = 0;
        return a;
    }

    ll x1, y1;
    ll gcd = gcdExtended(b, a%b, x1, y1);

    x = y1;
    y = x1 - (a/b) * y1;

    return gcd;
}

ll modInverse(ll b, ll m){
    ll x, y;
    ll g = gcdExtended(b,m,x,y);

    if(g != 1){
        return -1;
    }

    return (x%m + m) % m;
}

ll modDivide(ll a, ll b, ll m){
    a = a % m;
    ll inv = modInverse(b,m);
    if(inv == -1)
        return - 1;
    return (inv * a) % m;
}

ll pow(ll a, ll n) {
    if(n == 0)
        return 1;
    if(n == 1)
        return a;
    ll t = pow(a,n/2);
    t *= t;
    if(n%2)
        t = t * a;

    return t;
}

ll powMod(ll a, ll n, ll m) {
    if(n == 0)
        return 1%m;
    if(n == 1)
        return a%m;
    ll t = powMod(a,n/2,m) % m;
    t = (t * t) % m;

    if(n % 2)
        t = (t * a) % m;

    return t%m;
}

ll a, b, c, m;

int main()
{
    cin >> a >> b >> c >> m;

    a = powMod(a,b,m);

    cout << modDivide(a,c,m);

    return 0;
}
