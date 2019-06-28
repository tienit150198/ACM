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

ll n,m;
ll v[Max], u[Max];

_auto
{
    fast

    cin >> n;
    FOR(i,1,n){
        ll t;
        cin >> t;
        u[i] = u[i - 1] + t;
        v[i] = t;
    }
    cin >> m;

    sort(v+1,v+n+1);
    FOR(i,1,n){
//        u[i] += u[i - 1];
        v[i] += v[i - 1];
    }

    FOR(i,1,m){
        ll x, l, r;
        cin >> x >> l >> r;
        if(x == 1){
            cout << u[r] - u[l - 1] << endl;
        }else{
            cout <<v[r] - v[l-1] << endl;
        }
    }

    Acepted
}
