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

ll a, b, c;

ll x[] = {1,1,2,3,1,3,2};

vector<ll> save;

ll isCheck(ll xx, ll a, ll b, ll c){
    ll res = 0;

    while(true){
        ll t = x[xx];
        if(t == 1 && a){
            res++;
            a--;
        }else if(t == 2 && b){
            res++;
            b--;
        }else if(t == 3 && c){
            res++;
            c--;
        }else
            break;
        xx++;
        if(xx == 7)
            xx = 0;
    }
    return res;
}

_auto {
    fast
    cin >> a >> b >> c;

    ll x = a;
    ll y = b*1.5;
    ll z = c*1.5;

    ll t = min(x/3, min(y/3, z/3));
    ll ans = t * 7;
    a -= (t*3);
    b -= (t*2);
    c -= (t*2);

    ll _max = 0;
    FOR(i,0,6){
        _max = max(_max,isCheck(i,a,b,c));
    }

    cout << _max + ans;

    Acepted
}
