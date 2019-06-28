#include <bits/stdc++.h>
#define ll long long int
#define Max 1011
using namespace std;
string s, t;
ll a[Max][Max];

void out(ll n, ll m) {
    for(ll i = 0 ; i < n; i++) {
        for(ll j = 0 ; j < m; j++) {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin >> s >> t;
    s = ' ' + s;
    t = ' ' + t;
    ll n = s.size();
    ll m = t.size();
    ll _max = 0;
    for(ll i = 1 ; i <= n; i++) {
        for(ll j = 1 ; j <= m ; j++) {
            if(s[i] == t[j]){
                a[i][j] = a[i - 1][j - 1] + 1;
            }
            else
                a[i][j] = max(a[i-1][j], a[i][j -1]);
        }
    }

    for(ll i = 0 ; i < n ; i++) {
        for(ll j = 0 ; j < m; j++)
            _max = max(_max,a[i][j]);
    }

    cout << _max;
    return 0;
}
