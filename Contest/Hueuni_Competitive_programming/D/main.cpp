#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;
ll a[Max];

int main() {
    fast
    cin >> n;

    ll maxt = INT_MIN, maxd = INT_MIN;
    for(ll i = 0 ; i < n ; i++){
        ll x, y;
        cin >> x >> y;

        a[i] = x + y;

    }
    sort(a,a+n, greater<ll>());

    for(ll i = n - 1; i > 0 ; i--){
        if(a[i] >= 10){
            a[i - 1]++;
            a[i] = a[i] - 10;
        }
    }

    for(ll i = 0 ; i < n; i ++){
        cout << a[i];
    }

    return 0;
}
/*
double pi = 8 * 100.0/13;
	cout << fixed << setprecision(6) << pi <<endl;
    làm tròn
*/
