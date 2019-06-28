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
#define Max 100007
#define limit 1000007
#define MOD 1000000007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

string str;
ll up[Max], lo[Max];
_auto
{
    fast
    cin >> str;
    str = " " + str;
    ll n = str.size();
    FOR(i,1,n-1){
        lo[i] = lo[i - 1];
        if(islower(str[i]))
            lo[i]++;
    }
    FORD(i,n-1,1){
        up[i] = up[i + 1];
        if(isupper(str[i]))
            up[i]++;
    }

//    FOR(i,1,n-1){
//        cout << up[i] << " ";
//    }
//    cout << endl << endl;
//    FOR(i,1,n-1){
//        cout << lo[i] << " ";
//    }

    ll ans = INT_MAX;
    FOR(i,1,n-1){
        ans = min(up[i]+lo[i]-1,ans);
    }
    cout << ans;


    Acepted
}
