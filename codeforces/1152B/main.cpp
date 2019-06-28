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
#define Max 10000007
#define limit 1000007
#define MOD 1000000007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

ll x;
struct m {
    ll val, indx;
};
m a[Max];
ll num = 0;
bool powerOf2(ll x) {
    return x && (!(x&(x-1)));
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

vector<ll> vt;

_auto {
    fast
    for(ll i = 0 ; i <= 20 ; i++) {
        a[num].val = pow(2,i)-1;
        a[num].indx = i;
        num++;
    }


    cin >> x;
    ll t = 0;
    while(!isCheck(x+1)) {
        if(t%2){
            x++;
            t++;
            continue;
        }
        ll lo = -1, up = -1;
        for(ll i = 0 ; i < num ; i++) {
            if(a[i].val > x) {
                lo = i - 1;
                break;
            }
        }

        for(ll i = num - 1 ; i >= 0 ; i--) {
            if(a[i].val < x) {
                up = i + 1;
                break;
            }
        }

        ll _min = a[lo].val, indxMin = lo;
        if(abs(x - a[up].val) < abs(x - a[lo].val)) {
            _min = a[up].val;
            indxMin = up;
        }
        vt.pb(indxMin);
        x ^= (_min);
        t++;
    }
    cout << t << endl;
    if(vt.size()) {
        FOR(i,0,vt.size() - 1)
            cout << vt[i] << " ";
    }

    Acepted
}
