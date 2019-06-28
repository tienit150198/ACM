#include<bits/stdc++.h>
#define ll long long int
#define fl float
#define db double
#define ipair pair<ll, ll>
#define mp make_pair
#define pb push_back
#define is insert
#define endl "\n"
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FORD(i, a, b) for(ll i = a; i >= b; i--)
#define EACH(it, a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define cins(_x, a, b) {FOR($i, a, b) {cin >> _x[$i];}}
#define debug(a, st, en){for(ll i = st; i <= en; i++){cout << a[i] << " "; } cout << endl;}
#define debuga(a) cout << #a << " = " << a << endl;
#define EPS 0.0000000001
#define MOD 1000000007
#define MAX 1007

using namespace std;

fl a[5] = {500.0, 1000.0, 1500.0, 2000.0, 2500.0};
ll m[MAX];
ll w[MAX];
ll h[MAX];

int main() {
    ll n = 5;
    cins(m, 0, n-1)
    cins(w, 0, n-1)
    cins(h, 0, 1)
    fl _s = 0.0;
    _s += (100*h[0]);
    _s -= (50*h[1]);

    FOR(i, 0, n-1) {
        _s += max(0.3*a[i], (1-m[i]/250.0)*a[i] - 50.0*w[i]);
    }

    cout << ceil(_s) << endl;

    return 0;
}
