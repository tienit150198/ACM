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

ll n;
struct m{
    ll x, y;
};

m a[Max];
ll b[Max];
ll isCalcu(ll a, ll b, ll i){
    return a*(i-1) + b*(n-i);
}

bool cmp(ll i, ll j){
    return (a[i].x - a[i].y > a[j].x - a[j].y);
}

_auto {
    fast
    cin >> n;

    FOR(i,0,n-1){
        cin >> a[i].x >> a[i].y;
        b[i] = i;
    }
    ll ans = 0;

    sort(b, b + n, cmp);

    FOR(i,0,n-1){
        ans += a[b[i]].x * i + a[b[i]].y * (n - i - 1);
    }

    cout << ans;

    Acepted
}
