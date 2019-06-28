#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Max 100007
using namespace std;

ll n, m;
ll a[200][200];

int main() {
    fast
    cin >> m >> n;

    for(ll i = 1 ; i <= m ; i++) {
        for(ll j = 1 ; j <= n ; j++) {
            cin >> a[i][j];
        }
    }

    for(ll i = 0 ; i <= n ; i++)
        a[0][i] = a[m+1][i] = INT_MIN;

    for(ll j = 2 ; j <= n ; j++) {
        for(ll i = 1 ; i <= m ; i++) {
            a[i][j] += max(a[i-1][j-1], max(a[i][j-1], a[i+1][j-1]));
        }
    }

    ll res = INT_MIN;

    for(ll i = 1 ; i <= m; i++)
        res = max(res,a[i][n]);

    cout << res;

    return 0;
}
