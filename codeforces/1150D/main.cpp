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

bool isPrime(ll n) {
    if(n < 2)
        return false;
    for(ll i = 2 ; i * i <= n ; i++)
        if(!(n%i))
            return false;
    return true;
}

ll n, q;
string str, s1 = "", s2 = "", s3 = "";
set<char> s;
stack< pair<char,char> > sp;

_auto {
    // WA
    fast
    cin >> n >> q;
    cin >> str;

    FOR(i,0,str.size()-1) {
        s.insert(str[i]);
    }

    while(q--) {
        char x, number;;
        cin >> x;
        if(x == '+') {
            char charc;
            cin>> number >> charc;
            if(s.find(charc) == s.end()) {
                cout << "NO" << endl;
                continue;
            }
            if(number == '1') {
                s1 += charc;
            }
            if(number == '2')
                s2 += charc;
            if(number == '3')
                s3 += charc;
            //sp.push(number);
            sp.push(mp(number,charc));
        } else {
            cin >> number;
            ll xx = number - 48;
            //    cout << "xx = " << xx << endl;
            pair<char,char> tmp;
            //char tmp;
            while(xx-- && !sp.empty()) {
                tmp = sp.top();
                sp.pop();
                if(tmp.first == '1' && s1 != "" && s1[s1.size()-1] == tmp.second ) {
                    s1 = s1.substr(0,s1.size()-1);
                }
                if(tmp.first == '2' && s2 != "" && s2[s2.size()-1] == tmp.second) {
                    s2 = s2.substr(0,s2.size()-1);
                }
                if(tmp.first == '3' && s3 != "" && s3[s3.size()-1] == tmp.second) {
                    s3 = s3.substr(0,s3.size()-1);
                }
            }
        }
        //  cout << s1 << " -> " << s2 << " -> " << s3 << endl;
        ll size1 = s1.size(), size2 = s2.size(), size3 = s3.size();
        if(size1 <= n/3 && size2 <= n/3 && size3 <= n/3) {
            if(size1 + size2 + size3 >= n) {
                if((s1 != "" && s1 == s3) || (s1 != "" && s1 == s2) || (s2 != "" && s2 == s3) || (size1 + size2 + size3) > n)
                    cout << "NO";
                else
                    cout << "YES";
            } else {
                if(s1 != "" || s2 != "" || s3 != "" && size1 <= n/3 && size2 <= n/3 && size3 <= n/3)
                    cout << "YES";
                else
                    cout << "NO";

            }
        } else
            cout << "NO";

        cout << endl;
    }


    Acepted
}
