#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll a[Max];
ll num = 0;
ll n, m,k;

int main() {
    fast
    cin >> n >> m >> k;
    for(ll i = 0 ; i < n ; i++){
        for(ll j = 0 ; j < m ; j++){
            ll tmp;
            cin >> tmp;
            a[num++] = tmp;
        }
    }

    sort(a,a+num, greater<ll>());
    cout << a[k-1];

    return 0;
}
