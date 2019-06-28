#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define MOD 1000000007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

bool isPrime(ll a){
    if(a < 2)
        return false;
    ll tt = sqrt(a);
    for(ll i = 2 ; i <= tt ; i++)
        if(!(a%i))
            return false;
    return true;
}

bool isSquare(ll a){
    ll tt = sqrt(a);
    return (tt*tt == a);
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

ll phiEuler(ll n) {
    ll res = n;

    for(ll i = 2 ; i * i <= n ; i++) {
        if(n%i == 0) {
            while(n % i == 0)
                n /= i;
            res -= (res / i);
        }
    }

    if(n != 1)
        res -= (res / n);
    return res;

}

void sieve(){
    ll a[Max];
    vector<ll> vt;
    for(ll i = 0 ; i <= Max ; i++)
        a[i] = false;
    for(ll i = 2 ; i*i <= Max ; i++){
        if(!a[i]){
            for(ll j = i*i ; j <= Max ; j += i)
                a[j] = true;
        }
    }

    for(ll i = 2 ; i <= Max ; i++)
        if(!a[i])
            vt.push_back(i);
}

void computeTotient(ll n) {
    ll phi[n+1];

    for(ll i = 1 ; i <= n; i++) {
        phi[i] = i;
    }

    for(ll p = 2 ; p <= n ; p++) {
        if(phi[p] == p) {
            phi[p] = p - 1;

            for(ll i = 2*p ; i <= n ; i += p) {
                phi[i] = (phi[i]/p) * (p-1);
            }
        }
    }
}

long double isCal(ll n, ll k) {
    long double res = 1;
    if(k > n - k)
        k = n - k;

    for(ll i = 0 ; i < k ; i++) {
        res *= (n - i);
        res /= (i+1);
    }
    return res;
}

ll slove(ll k, ll x, ll y){
    ll ans = 0;
    if(x <= y/2)
        ans = k*x;
    else{
        ll t = k / 2;
        ll t1 = k%2;

        ans += (t*y);
        if(t1 == 1)
            ans += x;
    }
    return ans;
}

int main()
{
    fast
    ll t;
    cin >> t;
    while(t--){
        ll k, x, y;
        cin >> k >> x >> y;
        cout << slove(k,x,y) << endl;
    }

    return 0;
}
