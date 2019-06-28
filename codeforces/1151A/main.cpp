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
string str;

string pat = "ACTG";
_auto {
    fast
    cin >> n;
    cin >> str;

    ll ans = INT_MAX;

    for(ll i = 0 ; i < n - 3 ; i++) {
        ll tmp = 0;
        ll j = i, k = 0;

        while(j < n && k < 4) {
            if(str[j] == pat[k]) {
                k++, j++;
                continue;
            }
            char x = str[j] + 1, y = str[j] - 1;
            if(x > 'Z')
                x = 'A';
            if(y < 'A')
                y = 'Z';
            ll c = 1;
            while(x != pat[k] && y != pat[k]) {
                x++;
                y--;
                c++;
                if(x > 'Z')
                    x = 'A';
                if(y < 'A')
                    y = 'Z';
            }
            tmp += c;
            k++;
            j++;
        }

        ans = min(tmp,ans);
    }
    cout << ans;

    Acepted
}
