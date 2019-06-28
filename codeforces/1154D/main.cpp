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

ll n, a, b;
ll x[Max];

void use_battery(ll s, ll maxa) {
    if(s == 1)
        a = min(a + 1, maxa);
    --b;
}

void use_accum() {
    --a;
}

_auto {
    fast
    cin >> n >> b >> a;

    FOR(i,1,n)
    cin >> x[i];

    ll ans = 0, _maxa = a;
    FOR(i,1,n) {
        if(!a && !b)
            break;
        if(!a) {
            use_battery(x[i],_maxa);
        } else if(!b)
            use_accum();
        else if(x[i] && a < _maxa)
            use_battery(x[i],_maxa);
        else
            use_accum();
        ans++;
    }
    cout << ans;
    Acepted
}
