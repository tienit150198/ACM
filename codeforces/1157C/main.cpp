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

string res = "";
ll n;
ll a[Max];
vector<ll> t;

_auto {
    fast
    cin >> n;

    FOR(i,0,n-1)
    cin >> a[i];

    ll i = 0, j = n - 1, tmp = 0, r = 0, l = 0;
    bool f = true;
    while(i < n && j >= 0 && i < j) {
        if(i == 0 && j == n - 1) {
            if(a[i] < a[j]) {
                t.pb(a[i]);
                res += 'L';
                tmp = a[i];
                i++;
                l++;
            } else if(a[j] < a[i]) {
                t.pb(a[j]);
                res += 'R';
                r++;
                tmp = a[j];
                j--;
            } else {
                ll u = i, v = j;
                while(u < n && v >= 0 && u < v && a[u] == a[v]){
                    u++, v--;
                }
                if(a[u] < a[v]) {
                    t.pb(a[i]);
                    res += 'L';
                    tmp = a[i];
                    i++;
                    l++;
                } else {
                    t.pb(a[j]);
                    res += 'R';
                    r++;
                    tmp = a[j];
                    j--;
                }
            }
            continue;
        }
        if(a[i] > tmp && a[j] > tmp) {
            if(a[i] < a[j] && (a[i] > tmp)) {
                t.pb(a[i]);
                res += 'L';
                tmp = a[i];
                l++;
                i++;
            } else if(a[j] < a[i]) {
                t.pb(a[j]);
                res += 'R';
                r++;
                tmp = a[j];
                j--;
            } else {
                ll u = i, v = j;
                while(u < n && v >= 0 && u < v && a[u] == a[v]){
                    u++, v--;
                }
                if(a[u] < a[v]) {
                    t.pb(a[i]);
                    res += 'L';
                    tmp = a[i];
                    i++;
                    l++;
                } else {
                    t.pb(a[j]);
                    res += 'R';
                    r++;
                    tmp = a[j];
                    j--;
                }
            }
        } else if(a[i] > tmp) {
            t.pb(a[i]);
            res += 'L';
            tmp = a[i];
            l++;
            i++;
        } else if(a[j] > tmp) {
            t.pb(a[j]);
            res += 'R';
            r++;
            tmp = a[j];
            j--;
        } else {
            f = false;
            break;
        }

    }
    if(n%2 && f) {
        if(i == n/2 && a[i] > tmp) {
            t.pb(a[i]);
            res += 'L';
            l++;
            i++;
        } else {
            t.pb(a[j]);
            res += 'R';
            r++;
            j--;
        }
    } else {
        if(t.size() < n && f) {
            if(l > r && a[i] > tmp) {
                t.pb(a[j]);
                res += 'R';
                j--;
            } else if(r < l && a[j] > tmp) {
                t.pb(a[i]);
                res += 'L';
                i++;
            }
        }
    }

    for(i = 0 ; i < t.size()-1 ; i++) {
       // cout << t[i] << " ";
        if(t[i] >= t[i + 1]) {
            break;
        }
    }
   // cout << endl;

    cout << i+1 << endl;
    for(j = 0 ; j <= i ; j++)
        cout << res[j];

    Acepted
    // WA
}
/*
5
5 4 2 1 3

10
1 2 5 6 3 0 3 4 2 1
*/
