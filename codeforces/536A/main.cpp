#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define mk make_pair
#define ipair pair<ll,ll>
#define MOD 10000000007
#define Max 100007
using namespace std;

ll n;
ll a[1000][1000];

int main()
{
    fast
    cin >> n;

    for(ll i = 1 ; i <= n ; i++){
        for(ll j = 1 ; j <= n ; j++){
            char tmp;
            cin >> tmp;

            if(tmp == 'X'){
                a[i][j] = 1;
            }
        }
    }
    ll ans = 0;
    for(ll i = 1 ; i <= n ; i++){
        for(ll j = 1 ; j <= n ; j++){
            if(a[i][j] && a[i-1][j-1] && a[i-1][j+1] && a[i+1][j-1] && a[i+1][j+1]){
                ans++;
            }
        }
    }

    cout << ans;


    return 0;
}
