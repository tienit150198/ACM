#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    ll n, m;
    cin >> n;
    ll a[500], b[500], c[1000];
    ll j = 0;
    for(ll i = 0 ; i < n; i++){
        cin >> a[i];
        c[j++] = a[i];
    }

    cin >> m;
    for(ll i = 0 ; i < m; i++){
        cin >> b[i];
        c[j++] = b[i];
    }

    sort(c,c+n+m);
    for(ll i = 0 ; i < n + m ; i++)
        cout << c[i] << " ";

    return 0;
}
