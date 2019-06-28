#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

    ll n, m;
ll a[2000][2000];
int main() {
    fast
    cin >> n >> m;

    for(ll i = 0 ; i < n ; i++){
        for(ll j = 0 ; j < m ; j++)
            cin >> a[i][j];
    }

    ll ans = 0;
    for(ll i = 0 ; i < n-1 ; i++){
        for(ll j = 0 ; j < m-1 ; j++){
            ll x = abs(a[i][j] - a[i][j+1]);
            ll y = abs(a[i+1][j] - a[i+1][j+1]);
            ll z = abs(a[i][j]  - a[i+1][j]);
            ll zz = abs(a[i][j+1] - a[i+1][j+1]);
            ll xx = abs(a[i][j] - a[i+1][j+1]);
            ll yy = abs(a[i][j+1] - a[i+1][j]);
            if(x%3 == 0 || y % 3 == 0 || z % 3 == 0 || zz % 3 == 0 || yy % 3 == 0 || xx % 3 == 0 ){
                ans++;
            }
        }
      //  cout << endl;
    }
    cout << ans;


    return 0;
}
/*
double pi = 8 * 100.0/13;
	cout << fixed << setprecision(6) << pi <<endl;
    làm tròn
*/
