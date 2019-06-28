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
#define Max 300007
#define limit 1000007
#define MOD 1000000007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

ll n;
ll a[Max];

_auto {
    fast
    cin >> n;

    FOR(i,0,n-1)
        cin >> a[i];

    ll i = 0, j = n - 1;
    ll t = 0, t1 = 0;

    while(i < n && j >= 0) {
        if(a[i] != a[0]) {
            t = max(abs(i), t);
        }
        if(a[j] != a[n-1]) {
            t1 = max(abs(n-j-1), t1);
        }

        i++, j--;
    }

    cout << max(t,t1);

    Acepted
}
