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

ll n, m, h;
ll a[300], b[300];
ll f[300][300];

_auto
{
    fast
    cin >> n >> m >> h;

    FOR(i,0,m-1)
        cin >> a[i];
    FOR(i,0,n-1)
        cin >> b[i];
    FOR(i,0,n-1){
        FOR(j,0,m-1){
            cin >> f[i][j];
            if(f[i][j]){
                f[i][j] = min(a[j],b[i]);
            }
        }
    }

    FOR(i,0,n-1){
        FOR(j,0,m-1){
            cout << f[i][j] << " ";
        }
        cout << endl;
    }

    Acepted
}
