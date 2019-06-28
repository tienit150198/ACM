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
ll f[Max];
vector<ll> res;

void saveVal(ll a[], ll n) {
    ll tmp = 0;
    FOR(i,0,n-1) {
        if(a[i] == 0)
            tmp = tmp - f[i];
        else
            tmp += f[i];
    }
    res.pb(tmp);
}

void gen(ll a[], ll n) {
    FOR(i,0,n-1)
    a[i] = 0;

    ll i = n - 1;
    while(true) {
        saveVal(a,n);
        i = n - 1;

        while(i >= 0 && a[i] == 1)
            i--;
        if(i < 0)
            break;

        a[i] = 1;
        FOR(j,i+1,n-1)
        a[j] = 0;
    }
}

_auto {
    fast
    ll a[20];
    cin >> n;

    FOR(i,0,n-1) {
        cin >> f[i];
    }
    gen(a,n);

    FOR(i,0,res.size() - 1) {
//        cout << i << " -> " << res[i] << endl;
        if(res[i] % 360 == 0) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";


    Acepted
}
