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
#define limit 1024
#define MOD 1000000007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

ll n, m;
ll a[2000][2000];
ll b[2000][2000];


struct t {
    ll val, indx;
};

t save[507][507];

_auto {
    fast
    cin >> n >> m;
    FOR(i,0,n-1) {
        FOR(j,0,m-1) {
            ll x;
            cin >> x;
            if(!a[i][x]) {
                a[i][x]++;
                b[i][x] = j+1;
            }
        }
    }

    ll u = 0, v = 0;
    FOR(i,0,n-1) {
        ll x = 0;
        FOR(j,1,10) {
            if(a[i][j]) {
                save[u][x].val = j;
                save[u][x].indx = b[i][j];
                x++;
            }
        }
        u++;
        v = max(x,v);
    }

    if(n == 1) {
        if(save[0][0]) {
            cout << "TAK" << endl << save[0][0];
        } else
            cout << "NIE";
        return 0;
    }

    ll x = 0;
    vector<ll> vt;
    FOR(i,0,u-1) {
        FOR(j,i+1,u-1) {
            ll tmp = save[i][j];
            ll t = x;
            if(tmp) {
                FOR(k,0,v-1) {
                    if(save[])
                    }
            }

        }
    }


    Acepted
}
