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
#define FORE(i,a,b,k) for(ll i = a ; i <= b; i += k)
#define EACH(it,a) for(_typeof(a.begin()) it = a.begin() ; it != a.end() ; ++it)
#define EPS 0.0000000001
#define SQ(a) a*a
#define SUM(a) (a*(a+1))/2
#define Max 200007
#define limit 1000007
#define MOD 1000000007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


using namespace std;

ll n, k;
ll a[Max], f[Max];

_auto
{
    cin >> n >> k;
    FOR(i,1,n){
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }

    ll sum = f[k], indx = 1;
    FOR(i,1,n-k){
        if(f[k+i] - f[i] < sum){
            sum = f[k+i] - f[i];
            indx = i+1;
        }
    }
    cout << indx;

    Acepted
}
