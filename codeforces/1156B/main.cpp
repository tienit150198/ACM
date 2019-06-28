#include <bits/stdc++.h>
#define ll long long int
#define fi first
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

ll modDivice(ll a, ll b, ll m) { // (b * c) % m = a % m.
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

bool powerOf2(ll x) {
    return x && (!(x&(x-1)));
}

ll t;
string str;
map<char,ll> isMap;

bool isCheck(string res) {
    bool ok = true;
    for(ll i = 0 ; i < res.size()-1; i++) {
        if(abs(res[i] - res[i + 1]) == 1) {
            ok = false;
            break;
        }
    }
    return ok;
}

_auto {
    fast
    cin >> t;
    while(t--) {
        cin >> str;
        FOR(i,0,str.size()-1)
        isMap[str[i]]++;

        string t1 = "", t2 = "", res = "", res1 = "";
        map<char,ll>::iterator it = isMap.begin();

        bool f = false;
        while(it != isMap.end()) {
            ll number = it->se;
            char charc = it->fi;
            if(f) {
                for(ll i = 0 ; i < number; i++)
                    t1 += charc;
            } else {
                for(ll i = 0 ; i < number; i++)
                    t2 += charc;
            }
            f = !f;
            it++;
        }
        res = t1+t2;
        res1 = t2 + t1;
        //    cout << t1 << " -> " << t2 << " -> " << res << endl;

        if(isCheck(res))
            cout << res << endl;
        else if(isCheck(res1))
            cout << res1 << endl;
        else
            cout << "No answer" << endl;
        isMap.clear();
    }

    Acepted
}
