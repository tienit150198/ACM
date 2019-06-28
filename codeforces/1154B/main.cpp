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
ll a[300];
set<ll> s;
_auto {
    fast
    cin >> n;

    FOR(i,0,n-1) {
        cin >> a[i];
        s.is(a[i]);
    }

    sort(a,a+n);
    ll _min = a[0], _max = a[n-1];
    ll x = (_max - _min)/2;
    ll y = (_min + _max)/2;

    if(s.size() == 2) {
        if((_min+_max)&1) {
            cout << _max-_min;
        } else {
            cout << x;
        }
        return 0;
    }

    FOR(i, 0, n-1) {
        if(a[i] < y) {
            if(a[i] + x != y) {
                cout << -1;
                return 0;
            }
        } else if(a[i] > y) {
            if(a[i] - x != y) {
                cout << -1;
                return 0;
            }
        }
    }
    cout << x;
    Acepted
}
