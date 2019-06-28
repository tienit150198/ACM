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

ll n, t;
ll s[300], d[300];

_auto
{
    fast

    cin >> n >> t;

    for(ll i = 1 ; i <= n ; i++){
        cin >> s[i] >> d[i];

        while(s[i] < t)
            s[i] += d[i];
    }

    ll ans = 0, val = INT_MAX;
    for(ll i = 1 ; i <= n ; i++){
        if(s[i] >= t){
            if(s[i] < val){
                val = s[i];
                ans = i;
            }
        }
    }
    cout << ans;

    Acepted
}
