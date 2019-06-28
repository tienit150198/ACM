#include <bits/stdc++.h>
#define ll long long int
#define fi fist
#define se second
#define pb push_back
#define mp make_pair
#define is insert
#define _auto int main()
#define Acepted return 0;
#define ipair pair<ll,ll>
#define spair pair<string,string>
#define debug(a,st,en) {for(ll i = st; i <= en ; i++) {cout << a[i] << " ";} << cout << endl;}
#define debuga(a) cout << (#a) << " = " << a << endl;
#define FOR(i,a,b) for(ll i = a; i <= b ; i++)
#define FORD(i,a,b) for(ll i = a; i >= b; i--)
#define EACH(it,a) for(_typeof(a.begin()) it = a.begin() ; it != a.end() ; ++it)
#define EPS 0.0000000001
#define SQ(a) a*a
#define SUM(a) (a*(a+1))/2
#define Max 200007
#define limit 1000007
#define MOD 1000000007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

void sieve() {
    // SINH PHI FUNCTION
    for(ll i = 1 ; i <= Max ; i++)
        p[i] = i;

    for(ll i = 2 ; i <= Max ; i++) {
        if(p[i] == i) {
            p[i]--;
            for(ll j = i * 2 ; j <= Max ; j += i) {
                p[j] = (p[j]/i) * (i-1);
            }
        }
    }
    // END

    for(ll i = 1 ; i <= Max ; i++) {
        f[i] = f[i - 1] + p[i];
    }
}

ll gcdExtend(ll a, ll b, ll &x, ll &y) {
    if(b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll gcd = gcdExtend(b, a%b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return gcd;
}

ll modInverse(ll b, ll m) { // ( b * x ) % m == 1
    ll x, y;
    ll g = gcdExtend(b,m,x,y);
    if(g != 1)
        return -1;  // no solution
    return (x%m + m) % m;
}

ll modDivice(ll a, ll b, ll m){ // (b * c) % m = a % m.
    a %= m;
    ll inv = modInverse(b,m);
    if(inv == -1)
        return -1;
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

ll powMod2(ll a, ll n, ll m) {
    ll res = 1;
    for(ll i = n ; i ; i >>= 1) {
        if(i & 1)
            res = (res * a) % m;
        a = (a * a) % m;
    }
    return res;
}

ll phiEuler(ll n){
    ll res = n;

    for(ll i = 2 ; i * i <= n ; i++){
        if(n%i == 0){
            while(n % i == 0)
                n /= i;
            res -= (res / i);
        }
    }

    if(n != 1)
        res -= (res / n);

    return res;
}

bool isPrime(ll n){
    if(n < 2)
        return false;
    for(ll i = 2 ; i * i <= n ; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

ll tinhUoc(ll n){
    ll x = 1;

    for(ll i = 2 ; i * i <= n ; i++){
        if(n % i == 0){
            x += i;
            if((n/i) != i)
                x += (n/i);
        }
    }
    return x;
}

bool isHH(ll a){
    if(a == 1)
        return false;
    return (tinhUoc(a) == a);
}

bool isCP(ll a){
    ll x = sqrt(a);

    return (x * x == a);
}

_auto
{
    fast
    Acepted
}